@echo off 
Color 0A
Echo. ************************************
Echo.       Eclipse for AVR
Echo.  
Echo.       User...: %USERNAME%    
Echo.       Time...: %time% 
Echo.       Datum..: %date:~0%
Echo.  
Echo.       Eclipse StartUp Script
Echo. ************************************
Echo.
Echo.
::---SET PARAMS-------------------------------------------
SET EPATH=..\06_Developement_Tools\02_Tools\03_Eclipse\eclipse\eclipse.exe

::---CHECK-----------------------------------------------
Echo. Starte Eclipse....
IF exist %EPATH% GoTo START
GoTo ERROR

::---START------------------------------------------------
:START

Start %EPATH%%EEXE% -data %~dp0

GoTo END
::---ERROR------------------------------------------------
:ERROR
Echo. !!!! Can't finde eclipse. !!!!!
Echo. Eclipse should be installed underthe Path: 
Echo. %EPATH%

:END
Sleep 3
Exit