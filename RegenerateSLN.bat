@echo off
setlocal

rem Path to your Unreal Engine source build root folder (contains Engine\Build\BatchFiles)
set UE_PATH=D:\LocalWorkDir\1903578\UnrealEngine5.6

rem Full path to your .uproject file
set PROJECT_PATH=D:\LocalWorkDir\1903578\RealtimeRoads\RealtimeRoads.uproject

rem Call the Unreal Engine script to regenerate project files
"%UE_PATH%\Engine\Build\BatchFiles\GenerateProjectFiles.bat" -project="%PROJECT_PATH%" -game -engine

endlocal
pause
