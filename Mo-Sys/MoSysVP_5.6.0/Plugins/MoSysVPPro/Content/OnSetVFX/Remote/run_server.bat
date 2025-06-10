REM Copyright 2021 Mo-Sys Engineering Ltd. All Rights Reserved.
@echo off 
echo Checking if required commands are available....
set missingCommandMessage=It should be available from the command line (added to Path environment variable)
python --version >nul 2>&1
IF %errorlevel% neq 0 (
    echo "Python 3.7 or higher is required. %missingCommandMessage%"
    exit /b %errorlevel%
)
python -m pip >nul 2>&1
IF %errorlevel% neq 0 (
    echo "Pip is required. %missingCommandMessage%"
    exit /b %errorlevel%
)
REM Remove venv if it already exists
REM IF EXIST "venv". (
REM    echo Removing existing venv directory
REM    rmdir "venv" /s /q
REM )
echo Creating python venv
python -m venv "venv"
IF NOT EXIST "venv". (
    echo Venv wasn't created
    exit /b %errorlevel%
)
echo Activate venv
call "venv/Scripts/activate.bat"
IF %errorlevel% neq 0 (
    echo "Failed to active venv"
    exit /b %errorlevel%
)
REM TODO: if this virtual env is used from multiple different places then there may be package
REM not used by some...
echo Install required python dependencies with pip
pip install -r "requirements.txt"
python -m swagger_server
