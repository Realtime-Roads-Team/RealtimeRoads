@echo off
setlocal

rem Path to your Unreal Engine source build root folder (contains Engine\Build\BatchFiles)
set UE_PATH=D:\LocalWorkDir\1903578\GITHUB\UnrealEngine

rem Full path to your .uproject file
set PROJECT_PATH=D:\LocalWorkDir\1903578\GITHUB\RealtimeRoads\RealtimeRoads\RealtimeRoads.uproject

rem Call the Unreal Engine script to regenerate project files
"%UE_PATH%\Engine\Build\BatchFiles\GenerateProjectFiles.bat" -project="%PROJECT_PATH%" -game -engine

endlocal
pause
