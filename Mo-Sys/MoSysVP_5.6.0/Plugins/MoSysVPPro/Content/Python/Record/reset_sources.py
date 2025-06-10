import unreal
import re

PROPERTIES_TO_REMOVE = [
    "LookatTrackingSettings",
]

PROPERTIES_TO_DISABLE = [
    "LookatTrackingSettings",
    "PostProcessSettings",
    "EvalInputs",
    "CroppedFilmback"
]

CHILDREN_TO_REMOVE = [
    "MoSysLiveLink",
    "IdentTextRender",
    "MoSysFillThumbnailCapture",
    "MoSysKeyThumbnailCapture"
]

CHILDREN_TO_DISABLE = [
    "MoSysTransform",
    "GameCamera",
    "CameraComponent",
]

CINE_CAMERA_SETTINGS_TO_KEEP = [
    "CurrentAperture",
    "FieldOfView",
    "Filmback.SensorWidth",
    "Filmback.SensorHeight",
    "Filmback.SensorAspectRatio"
]

# TODO: RECORD refactor this function
def update_properties(recorded_properties, post_process_settings):
    properties = recorded_properties.get_editor_property("properties")
    children = recorded_properties.get_editor_property("children")

    # copy them
    new_properties = properties[:]
    new_children = children[:]
        
    # remove components
    recorded_properties_name = recorded_properties.get_name()
    for component_name in CHILDREN_TO_REMOVE:
        if component_name in recorded_properties_name:
            return new_properties, new_children, True
            
    
    # remove properties
    for property in properties:
        for remove_property in PROPERTIES_TO_REMOVE:			
            if remove_property in str(property.property_name):
                new_properties.remove(property)

    # special case to remove Transform property of the Distortion BP
    if "MoSysLensDistortion" in recorded_properties_name:
        for property in properties:		
            if "Transform" in str(property.property_name):
                new_properties.remove(property)


    def find_and_disable_property(property_name):
        for index, new_property in enumerate(new_properties):					
            if new_property.property_name == property_name:
                new_properties[index] = unreal.ActorRecordedProperty(new_property.property_name, False)

    is_camera_component = "CameraComponent" in recorded_properties_name

    # disable component (all properties)
    for component_name in CHILDREN_TO_DISABLE:
        if component_name in recorded_properties_name:
            for property in properties:
                
                # TODO: RECORD improve this
                if post_process_settings:
                    property_name = str(property.property_name)
                    if property_name.startswith("PostProcessSettings"):
                        py_override_property_name = property_name.removeprefix("PostProcessSettings.")
                        py_override_property_name = "override_" + '_'.join(re.findall("[A-Z]+[^A-Z]*", py_override_property_name)).lower()
                        try:
                            post_process_setting = post_process_settings.get_editor_property(py_override_property_name)
                            if post_process_setting:
                                continue
                        except Exception as e:
                            pass  
                    else:
                        keep_cine_camera_setting = False
                        for cine_camera_setting in CINE_CAMERA_SETTINGS_TO_KEEP:
                            if property_name == cine_camera_setting:
                                keep_cine_camera_setting = True
                                continue
                        if keep_cine_camera_setting:
                            continue
                    
                find_and_disable_property(property.property_name)							


    # disable certain properties		
    for property in properties:
        for disable_property in PROPERTIES_TO_DISABLE:	
            if disable_property == "PostProcessSettings" and is_camera_component:
                continue	
            property_name = str(property.property_name)	
            if disable_property in property_name:       
                # special check before disabling if this property is a PostProcessing property and it was enabled on the camera
                # In this case we don't want it disabled
                # is_enabled_pp_setting = property_name in enabled_pp_setting_property_names		
                # if not is_enabled_pp_setting:
                find_and_disable_property(property_name)
                                        
    for child in children:
        np, nc, remove_child = update_properties(child, post_process_settings)
        if remove_child:
            new_children.remove(child)
        child.set_editor_property("properties", np)
        child.set_editor_property("children", nc)

    return new_properties, new_children, False

def reset_sources():
    # get the record subsystem and take recorder panel
    record_sub = unreal.get_engine_subsystem(unreal.MoSysRecordSubsystem)
    recorder_panel = unreal.TakeRecorderBlueprintLibrary.open_take_recorder_panel()

    # get lists of actors to record/that were recorded (valid only for the duration of this script!)
    actor_sources = record_sub.reset_sources_list
    previous_actor_sources = record_sub.previous_reset_sources_list

    # get existing sources in the panel (UTakeRecorderSources)
    panel_sources = recorder_panel.get_sources()

    # remove previous sources from the panel 
    print("Removing previous Mo-Sys sources from recorder panel")
    for previous_actor_source in previous_actor_sources:
        if previous_actor_source:
            unreal.TakeRecorderActorSource.remove_actor_from_sources(previous_actor_source, panel_sources)

    # list of added UTakeRecorderActorSource 
    recorder_sources = []

    # add new sources to the panel
    if len(actor_sources):
        print(f"Adding {len(actor_sources)} Mo-Sys sources to recorder panel")
    else:
        unreal.log_warning("Please add a Mo-Sys Stage (with camera) to your level so the reset can add the source to the recorder")
    for actor_source in actor_sources:
        if actor_source:
            recorder_source = unreal.TakeRecorderActorSource.add_source_for_actor(actor_source, panel_sources)
            if recorder_source:
                recorder_sources.append(recorder_source)

    # TODO: RECORD would be nice to be able to have this done from c++ or at least customisable from there
    # when a source is added to/by RecordSubsystem
    # update properties
    for recorder_source in recorder_sources:
        recorder_source.set_editor_property("record_type", unreal.TakeRecorderActorRecordType.SPAWNABLE)
        recorder_source.set_editor_property("reduce_keys", False)
        recorder_source.set_editor_property("record_parent_hierarchy", True)

        # get post process settings if actor has a cine camera
        cine_camera_component = recorder_source.target.get_component_by_class(unreal.CineCameraComponent)
        post_process_settings = cine_camera_component.post_process_settings if cine_camera_component else None

        new_properties, new_children, _ = update_properties(recorder_source.recorded_properties, post_process_settings)
        recorder_source.recorded_properties.set_editor_property("properties", new_properties)
        recorder_source.recorded_properties.set_editor_property("children", new_children)

reset_sources()