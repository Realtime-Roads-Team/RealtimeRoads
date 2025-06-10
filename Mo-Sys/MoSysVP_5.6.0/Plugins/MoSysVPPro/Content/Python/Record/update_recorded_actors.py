import unreal
import re


def update_recorded_actors():
    # get the record subsystem and take recorder panel
    record_sub = unreal.get_engine_subsystem(unreal.MoSysRecordSubsystem)
    recorder_panel = record_sub.open_and_get_recorder_panel()

    # get existing sources in the panel (UTakeRecorderSources)
    panel_sources = recorder_panel.get_sources()
    if not panel_sources:
        unreal.warning("Could not update recorded actors as invalid PanelSources")
        return

    sources = panel_sources.get_sources_copy()

    record_sub.recorded_cameras = []

    for source in sources:
        # check if source is an actor source
        try:
            actor_source = unreal.TakeRecorderActorSource.cast(source)
        except TypeError as e:
            actor_source = None
        
        # check if the actor source is of a AMoSysCameraBase
        if actor_source:
            target = actor_source.get_source_actor()
            as_camera = None
            try:
                as_camera = unreal.MoSysCameraBase.cast(target)
            except TypeError as e:
                pass                    

            # add camera to list of recorded cameras 
            if as_camera:
                record_sub.recorded_cameras.append(as_camera)
    

update_recorded_actors()