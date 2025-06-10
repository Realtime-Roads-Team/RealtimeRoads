import connexion
import six

from swagger_server.models.blue_print import BluePrint  # noqa: E501
from swagger_server.models.lens_status import LensStatus  # noqa: E501
from swagger_server.models.level import Level  # noqa: E501
from swagger_server.models.play import Play  # noqa: E501
from swagger_server.models.record import Record  # noqa: E501
from swagger_server.models.restart import Restart  # noqa: E501
from swagger_server.models.status import Status  # noqa: E501
from swagger_server.models.tracking_status import TrackingStatus  # noqa: E501
from swagger_server.models.video_status import VideoStatus  # noqa: E501
from swagger_server import util
from flask import jsonify
from flask import Response

import sys
#sys.path.append("../deps/MoSysPython")
#from mosys.unreal import project 


def get_blue_print(engineId):  # noqa: E501
    """Get engine bluePrint

    Engine bluePrint # noqa: E501

    :param engineId: Index of engine
    :type engineId: int

    :rtype: BluePrint
    """
    
    '''
    test_project = project.Project("localhost")

    if not test_project.is_valid():
        print("Error: UE Project failed to initialize")
        exit(1)
    print("Ready to communicate with UE project")
    '''

    return jsonify(
        bluePrint=68
    )

def get_lens_status(engineId):  # noqa: E501
    """Get lens Status

    Lens Status (enabled/disabled) # noqa: E501

    :param engineId: Index of engine
    :type engineId: int

    :rtype: LensStatus
    """
    return jsonify(
        lensStatus=True
    )


def get_level(engineId):  # noqa: E501
    """Get engine level

    Engine level # noqa: E501

    :param engineId: Index of engine
    :type engineId: int

    :rtype: Level
    """
    return jsonify(
        level="level 999"
    )


def get_play():  # noqa: E501
    """Check if master engine is in play

    play (enabled/disabled) # noqa: E501


    :rtype: Play
    """
    return jsonify(
        play=True
    )


def get_record():  # noqa: E501
    """Check if master engine is recording

    record (enabled/disabled) # noqa: E501


    :rtype: Record
    """
    return jsonify(
        record=True
    )


def get_status(engineId):  # noqa: E501
    """Check if engine is running

    status (enabled/disabled) # noqa: E501

    :param engineId: Index of engine
    :type engineId: int

    :rtype: Status
    """
    return jsonify(
        status=True
    )


def get_tracking_status(engineId):  # noqa: E501
    """Get VP Pro tracking status

    VP Pro tracking status # noqa: E501

    :param engineId: Index of engine
    :type engineId: int

    :rtype: TrackingStatus
    """
    return jsonify(
        id=0,
        detail="Undefined"
    )
    
    

def get_video_status(engineId):  # noqa: E501
    """Get videoStatus

    VideoStatus (enabled/disabled) # noqa: E501

    :param engineId: Index of engine
    :type engineId: int

    :rtype: VideoStatus
    """
    return jsonify(
        videoStatus=True
    )


def set_blue_print(bluePrint, engineId):  # noqa: E501
    """Update bluePrint

     # noqa: E501

    :param bluePrint: bluePrint
    :type bluePrint: dict | bytes
    :param engineId: Index of engine
    :type engineId: int

    :rtype: None
    """
    if connexion.request.is_json:
        bluePrint = BluePrint.from_dict(connexion.request.get_json())  # noqa: E501

    return Response("Success", status=200, mimetype='application/json')
    

def set_level(level, engineId):  # noqa: E501
    """Update engine level

     # noqa: E501

    :param level: level
    :type level: dict | bytes
    :param engineId: Index of engine
    :type engineId: int

    :rtype: None
    """
    if connexion.request.is_json:
        level = Level.from_dict(connexion.request.get_json())  # noqa: E501
    return Response("Success", status=200, mimetype='application/json')


def set_play(play):  # noqa: E501
    """Start / Stop playing

     # noqa: E501

    :param play: play
    :type play: dict | bytes

    :rtype: None
    """
    if connexion.request.is_json:
        play = Play.from_dict(connexion.request.get_json())  # noqa: E501
    return Response("Success", status=200, mimetype='application/json')


def set_record(record):  # noqa: E501
    """Start/Stop recording on master engine

     # noqa: E501

    :param record: record
    :type record: dict | bytes

    :rtype: None
    """
    if connexion.request.is_json:
        record = Record.from_dict(connexion.request.get_json())  # noqa: E501
    return Response("Success", status=200, mimetype='application/json')


def set_restart(restart, engineId):  # noqa: E501
    """Restart engine

     # noqa: E501

    :param restart: restart
    :type restart: dict | bytes
    :param engineId: Index of engine
    :type engineId: int

    :rtype: None
    """
    if connexion.request.is_json:
        restart = Restart.from_dict(connexion.request.get_json())  # noqa: E501
    return Response("Success", status=200, mimetype='application/json')


def set_status(status, engineId):  # noqa: E501
    """Start/Stop running engine

     # noqa: E501

    :param status: status
    :type status: dict | bytes
    :param engineId: Index of engine
    :type engineId: int

    :rtype: None
    """
    if connexion.request.is_json:
        status = Status.from_dict(connexion.request.get_json())  # noqa: E501
    return Response("Success", status=200, mimetype='application/json')


