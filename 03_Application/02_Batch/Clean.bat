@echo off 

Set FOLDER=%~dp0\..\03_Framework\%1

::--------------------------------------------
If exist %FOLDER% GoTo DELL
GoTo ERROR
::--------------------------------------------
:DELL
Echo. ------------------------------
Echo. Start to clean the folder %1
Echo.
del /s /Q  %FOLDER%
Echo. Cleaning successfull
Echo. ------------------------------
GoTo END
::--------------------------------------------
:EMPTY
Echo. ------------------------------
Echo. No Files to delete
Echo. ------------------------------
GoTo END
::--------------------------------------------
:ERROR
Echo. ------------------------------
Echo. Could not find %FOLDER%.
Echo. ------------------------------ 

:END
