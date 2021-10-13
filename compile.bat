@echo off

echo Please Install minGW and use it to install gcc.
echo Then add the bin folder inside the folder minGW is installed
echo to PATH. Make sure the .c file is called as "KM2M.c"
echo or else this won't work
pause
gcc -g -Wall "KM2M.c" -o "KM2M.exe"