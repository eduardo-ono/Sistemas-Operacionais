@echo off
ver
echo.
:loop
set /P cmd="%cd%>"
%cmd%
echo.
goto loop