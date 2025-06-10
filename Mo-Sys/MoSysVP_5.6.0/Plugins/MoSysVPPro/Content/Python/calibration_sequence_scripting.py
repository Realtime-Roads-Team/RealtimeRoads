import unreal
import ConfigParser
uMath = unreal.MathLibrary

def get_pan_positions(config, zoom_value, non_overlapping_intervals):
    """ Returns a list with all pan angles where camera will stop.

    Parameters:
    config (dict): Configuration dictionary 
    zoom_value (float): zoom encoder value (0-65535)
    non_overlapping_intervals (dict): dictionary containing non overlapping pan intervals
    """
    MAX_PAN_INCREMENT = 3
    MIN_PAN_INCREMENT = 0.5

    pan_increment_deg = uMath.lerp(MAX_PAN_INCREMENT, MIN_PAN_INCREMENT, zoom_value/65535.)

    pan_positions = []
    #multiplying by 10 because range function doesn't take float parameters
    for interval in non_overlapping_intervals:
        for pan_angle in range(min(interval) * 10, max(interval) * 10 + 1, int(pan_increment_deg * 10)):
            pan_positions.append(pan_angle/10.)

    return pan_positions



def get_current_pan_intervals(config, zoom_value):
    """ Returns pan intervals for each LED strip given the zoom value.

    Parameters:
    config (dict): Configuration dictionary 
    zoom_value (float): zoom encoder value (0-65535)
    """

    app_FOV_wide = config["lhs_wide_zoom_red"] - config["rhs_wide_zoom_red"]
    pan_intervals_wide = {}
    pan_intervals_wide["red"] = [config["rhs_wide_zoom_red"], config["lhs_wide_zoom_red"]]
    lhs_wide_zoom_green = config["rhs_wide_zoom_green"] + app_FOV_wide
    #print('pan_intervals_wide["red"]:' + str(pan_intervals_wide["red"]))
    if lhs_wide_zoom_green > 180:
        lhs_wide_zoom_green -= 360
    elif lhs_wide_zoom_green < -180:
        lhs_wide_zoom_green += 360       
    pan_intervals_wide["green"] = [config["rhs_wide_zoom_green"], lhs_wide_zoom_green]
    #print('pan_intervals_wide["green"]:' + str(pan_intervals_wide["green"]))

    lhs_wide_zoom_blue = config["rhs_wide_zoom_blue"] + app_FOV_wide
    if lhs_wide_zoom_blue > 180:
        lhs_wide_zoom_blue -= 360
    elif lhs_wide_zoom_blue < -180:
        lhs_wide_zoom_blue += 360

    pan_intervals_wide["blue"] = [config["rhs_wide_zoom_blue"], lhs_wide_zoom_blue]
    #print('pan_intervals_wide["blue"]:' + str(pan_intervals_wide["blue"])) 

    app_FOV_narrow = config["lhs_narrow_zoom_red"] - config["rhs_narrow_zoom_red"]
    pan_intervals_narrow = {}
    pan_intervals_narrow["red"] = [config["rhs_narrow_zoom_red"], config["lhs_narrow_zoom_red"]]
    lhs_narrow_zoom_green = config["rhs_narrow_zoom_green"] + app_FOV_narrow
    #print('pan_intervals_narrow["red"]:' + str(pan_intervals_narrow["red"]))
    if lhs_narrow_zoom_green > 180:
        lhs_narrow_zoom_green -= 360
    elif lhs_narrow_zoom_green < -180:
        lhs_narrow_zoom_green += 360       
    pan_intervals_narrow["green"] = [config["rhs_narrow_zoom_green"], lhs_narrow_zoom_green]
    #print('pan_intervals_narrow["green"]:' + str(pan_intervals_narrow["green"]))

    lhs_narrow_zoom_blue = config["rhs_narrow_zoom_blue"] + app_FOV_narrow
    if lhs_narrow_zoom_blue > 180:
        lhs_narrow_zoom_blue -= 360
    elif lhs_narrow_zoom_blue < -180:
        lhs_narrow_zoom_blue += 360

    pan_intervals_narrow["blue"] = [config["rhs_narrow_zoom_blue"], lhs_narrow_zoom_blue]
    #print('pan_intervals_narrow["blue"]:' + str(pan_intervals_narrow["blue"])) 

    current_pan_intervals = {}
    #convert to logspace and interpolate linearly. Scale according to config
    app_FOV = 10 ** uMath.lerp(
        uMath.log(abs(app_FOV_wide), 10), uMath.log(abs(app_FOV_narrow), 10), zoom_value/65535.) * config["fov_scale"]
    #print(app_FOV)
    current_pan_intervals["red"] = []

    #get centre angle by taking average of all angles
    red_centre = (pan_intervals_wide["red"][0] + pan_intervals_wide["red"][1]
                  + pan_intervals_narrow["red"][0] + pan_intervals_narrow["red"][1]) / 4

    current_pan_intervals["red"] = [
        uMath.f_floor(red_centre - app_FOV/2), uMath.f_ceil(red_centre + app_FOV/2)]


    #print('current_pan_intervals["red"]:' + str(current_pan_intervals["red"])) 

    #get centre angle by taking average of all angles
    green_centre = (pan_intervals_wide["green"][0] + pan_intervals_wide["green"][1]
                  + pan_intervals_narrow["green"][0] + pan_intervals_narrow["green"][1]) / 4

    current_pan_intervals["green"] = [
        uMath.f_floor(green_centre - app_FOV/2), uMath.f_ceil(green_centre + app_FOV/2)]

    #print('current_pan_intervals["green"]:' + str(current_pan_intervals["green"])) 

    #get centre angle by taking average of all angles
    blue_centre = (pan_intervals_wide["blue"][0] + pan_intervals_wide["blue"][1]
                  + pan_intervals_narrow["blue"][0] + pan_intervals_narrow["blue"][1]) / 4

    current_pan_intervals["blue"] = [
        uMath.f_floor(blue_centre - app_FOV/2), uMath.f_ceil(blue_centre + app_FOV/2)]

    #print('current_pan_intervals["blue"]:' + str(current_pan_intervals["blue"])) 

    return current_pan_intervals


def get_non_overlapping_intervals(pan_intervals_dict):
    """Returns a list of non everlaping pan intevals

    Parameters:
    pan_intervals_dict (dict): dictionary containing pan intervals for each LED strip 
    
    """

    non_overlapping_intervals = []
    if max(pan_intervals_dict["red"]) >= min(pan_intervals_dict["green"]): #if first two overlap, join them
        non_overlapping_intervals.append([min(pan_intervals_dict["red"]), max(pan_intervals_dict["green"])])
    else: #if don't overlap, use both
        non_overlapping_intervals.append(pan_intervals_dict["red"])
        non_overlapping_intervals.append(pan_intervals_dict["green"])
    if max(non_overlapping_intervals[-1]) >= min(pan_intervals_dict["blue"]): #check if overlaps with third one
        non_overlapping_intervals[-1] = [min(non_overlapping_intervals[-1]), max(pan_intervals_dict["blue"])]
    else:
        non_overlapping_intervals.append(pan_intervals_dict["blue"])

    return non_overlapping_intervals


def get_configuration():
    """Returns configuration dictionary"""

    config = ConfigParser.ConfigParser()
    config.read(unreal.Paths.project_config_dir()+'DefaultMoSysLensCalSequenceSettings.ini')
    config_dict = {}
    #ConfigParser in Python 2.7 doesn't reading nested configurations, therefore we have to write parsing of the nested bit 
    settings = config.get("/Script/MoSysVirtualProductionEditor.MoSysLensCalSequenceGenerator", "SequenceSettings").split(",")
    #get rid of brackets
    settings[0] = settings[0].replace("(","")
    settings[-1] = settings[-1].replace(")","")
    for item in settings:
        if "FramesPerSecond" in item:
            config_dict["frames_per_second"] = float(item.split("=")[1])
        elif "PanHoldTime" in item:
            config_dict["pan_hold_time_s"] = float(item.split("=")[1])
        elif "PanSpeed" in item:
            config_dict["pan_deg_per_second"] = float(item.split("=")[1])
        elif "FocusChangeSpeed" in item:
            config_dict["focus_change_speed"] = float(item.split("=")[1])
        elif "ZoomChangeSpeed" in item:
            config_dict["zoom_change_speed"] = float(item.split("=")[1])
        elif "FOVScale" in item:
            config_dict["fov_scale"] = float(item.split("=")[1])
        elif "NumFocusPos" in item:
            config_dict["num_focus_pos"] = int(item.split("=")[1])
        elif "NumZoomPos" in item:
            config_dict["num_zoom_pos"] = int(item.split("=")[1])
        elif "RedLeftSideWideAngle" in item:
            config_dict["lhs_wide_zoom_red"] = float(item.split("=")[1])
        elif "RedRightSideWideAngle" in item:
            config_dict["rhs_wide_zoom_red"] = float(item.split("=")[1])
        elif "RedLeftSideNarrowAngle" in item:
            config_dict["lhs_narrow_zoom_red"] = float(item.split("=")[1])
        elif "RedRightSideNarrowAngle" in item:
            config_dict["rhs_narrow_zoom_red"] = float(item.split("=")[1])
        elif "GreenRightSideWideAngle" in item:
            config_dict["rhs_wide_zoom_green"] = float(item.split("=")[1])
        elif "GreenRightSideNarrowAngle" in item:
            config_dict["rhs_narrow_zoom_green"] = float(item.split("=")[1])
        elif "BlueRightSideWideAngle" in item:
            config_dict["rhs_wide_zoom_blue"] = float(item.split("=")[1])
        elif "BlueRightSideNarrowAngle" in item:
            config_dict["rhs_narrow_zoom_blue"] = float(item.split("=")[1])
        elif "AssetName" in item:
            config_dict["asset_name"] = item.split("=")[1][1:-1] #strip quotation marks
    #print(config_dict)
    return config_dict


def create_level_sequence(name='LensCalLevelSequence'):
    """Creates a level sequence asset

    Parameters:
    name (str): name to be given to the created asset 
       
    """
    base_path = '/Game/LensCalLevelSequences/'

    #adds incrementing number to the name
    asset_path, _ = unreal.AssetToolsHelpers.get_asset_tools().create_unique_asset_name(base_package_name=base_path + name, suffix='')
    path = asset_path.rsplit('/', 1)[0]
    name = asset_path.rsplit('/', 1)[1]
    
    return unreal.AssetToolsHelpers.get_asset_tools().create_asset(
        asset_name=name, package_path=path, asset_class=unreal.LevelSequence, factory=unreal.LevelSequenceFactoryNew())


def main():

    config = get_configuration();

    num_pan_hold_frames = config["frames_per_second"] * config["pan_hold_time_s"]
    num_pan_frames_per_degree = config["frames_per_second"] / config["pan_deg_per_second"]

    if config["num_focus_pos"] > 1:
        focus_increment_ticks = 65535./(config["num_focus_pos"]-1)
    else:
        focus_increment_ticks = 0

    if config["num_zoom_pos"] > 1:
        zoom_increment_ticks = 65535./(config["num_zoom_pos"]-1)
    else:
        zoom_increment_ticks = 0

    num_zoom_change_frames = config["frames_per_second"] * (focus_increment_ticks/(65535*config["zoom_change_speed"]))

    camera_actor = unreal.GameplayStatics.get_all_actors_of_class(
        unreal.EditorLevelLibrary.get_editor_world(), unreal.MoSysCameraLensCapture)[0]

    if config["asset_name"]:
        level_sequence = create_level_sequence(config["asset_name"])
    else:
        level_sequence = create_level_sequence()
    level_sequence.set_display_rate(unreal.FrameRate(config["frames_per_second"], 1))

    #add camera actor to level sequence
    possessable_in_sequence = level_sequence.add_possessable(object_to_possess=camera_actor)
    
    #add transform track which contains pan information
    transform_track = possessable_in_sequence.add_track(track_type=unreal.MovieScene3DTransformTrack)

    pan_section = transform_track.add_section()
    pan_channel = pan_section.get_channels()[5] #channel at index 5 is rotation.Z

    #add focus value track
    focus_track = possessable_in_sequence.add_track(track_type=unreal.MovieSceneFloatTrack)
    focus_track.set_property_name_and_path(property_name='Focus Value', property_path='FocusValue')
    focus_section = focus_track.add_section()
    focus_channel = focus_section.get_channels()[0]

    #if zoom lens, add zoom value track
    if config["num_zoom_pos"] > 1:
        is_zoom_lens = True
        zoom_track = possessable_in_sequence.add_track(track_type=unreal.MovieSceneFloatTrack)
        zoom_track.set_property_name_and_path(property_name='Zoom Value', property_path='ZoomValue')
        zoom_section = zoom_track.add_section()
        zoom_channel = zoom_section.get_channels()[0]
    else:
        is_zoom_lens = False

    #set startup values
    next_key_frame_num = 0
    next_focus_value = 0
    next_zoom_value = 0

    panning_left_to_right = True

    for zoom_pos in range(config["num_zoom_pos"]):
        if is_zoom_lens:
            if zoom_pos:
                zoom_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_zoom_value)
                next_key_frame_num += num_zoom_change_frames
                next_zoom_value += zoom_increment_ticks
                zoom_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_zoom_value)
            else:
                #on first iteration, just set zoom to startup value
                zoom_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_zoom_value)

        current_pan_intervals = get_current_pan_intervals(config, next_zoom_value)

        intervals_to_use = get_non_overlapping_intervals(current_pan_intervals)
        #print(intervals_to_use)

        pan_positions = get_pan_positions(config, next_zoom_value, intervals_to_use)
        #print(pan_positions)
        #print(len(pan_positions))


        for focus_pos in range(config["num_focus_pos"]):
            if focus_pos:
                # change focus
                focus_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_focus_value)
                num_focus_change_frames = config["frames_per_second"] * (focus_increment_ticks/(65535*config["focus_change_speed"]))
                next_key_frame_num += num_focus_change_frames
                next_focus_value += focus_increment_ticks
                focus_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_focus_value)
            elif zoom_pos:
                # if starting next zoom iteration reset focus to 0
                focus_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_focus_value)
                num_focus_change_frames = config["frames_per_second"] * (1/config["focus_change_speed"])
                next_key_frame_num += num_focus_change_frames
                next_focus_value = 0
                focus_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_focus_value)
            else:
                #on first iteration, just set focus to startup value
                focus_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_focus_value)

            # pan&hold
            if panning_left_to_right:
                if focus_pos or not zoom_pos: #on initial zoom iteration or non-initial focus
                    for i in range(len(pan_positions)-1):
                        next_pan_value = pan_positions[i]
                        pan_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_pan_value)
                        pan_diff = abs(pan_positions[i+1] - pan_positions[i])
                        num_pan_frames = num_pan_frames_per_degree * pan_diff
                        next_key_frame_num += num_pan_frames
                        next_pan_value = pan_positions[i+1]
                        pan_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_pan_value)
                        next_key_frame_num+=num_pan_hold_frames
                else:
                    #on initial focus iteration, non-initial zoom there will be one more pan step
                    #to transition from last pan angle to starting point
                    for i in range(len(pan_positions)):
                        if i:
                            next_pan_value = pan_positions[i-1]
                            pan_diff = abs(pan_positions[i] - pan_positions[i-1])
                        else:
                            pan_diff = abs(pan_positions[i] - next_pan_value)

                        pan_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_pan_value)
                        num_pan_frames = num_pan_frames_per_degree * pan_diff
                        next_key_frame_num += num_pan_frames
                        next_pan_value = pan_positions[i]
                        pan_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_pan_value)
                        next_key_frame_num+=num_pan_hold_frames
            else:
                if focus_pos or not zoom_pos: #on initial zoom iteration or non-initial focus
                    for i in range(len(pan_positions)-1, 0, -1):
                        next_pan_value = pan_positions[i]
                        pan_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_pan_value)
                        pan_diff = abs(pan_positions[i-1] - pan_positions[i])
                        num_pan_frames = num_pan_frames_per_degree * pan_diff
                        next_key_frame_num += num_pan_frames
                        next_pan_value = pan_positions[i-1]
                        pan_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_pan_value)
                        next_key_frame_num+=num_pan_hold_frames
                else:
                    #on initial focus iteration, non-initial zoom there will be one more pan step
                    #to transition from last pan angle to starting point
                    for i in range(len(pan_positions)-1, -1, -1):
                        if i == len(pan_positions)-1:
                            pan_diff = abs(pan_positions[i] - next_pan_value)
                        else:
                            next_pan_value = pan_positions[i+1]
                            pan_diff = abs(pan_positions[i] - pan_positions[i+1])


                        pan_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_pan_value)
                        num_pan_frames = num_pan_frames_per_degree * pan_diff
                        next_key_frame_num += num_pan_frames
                        next_pan_value = pan_positions[i]
                        pan_channel.add_key(unreal.FrameNumber(next_key_frame_num), next_pan_value)
                        next_key_frame_num+=num_pan_hold_frames


            panning_left_to_right = not panning_left_to_right

    #set end frames
    level_sequence.set_playback_end(next_key_frame_num)
    pan_section.set_end_frame(next_key_frame_num)
    focus_section.set_end_frame(next_key_frame_num)
    if is_zoom_lens:
        zoom_section.set_end_frame(next_key_frame_num)


if __name__ == "__main__":
    main()