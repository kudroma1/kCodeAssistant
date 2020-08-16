p:
cd P:/KudromaCodeAssistant
"C:\Qt\5.15.0\mingw81_64\bin\qmake.exe"
"C:\Program Files\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\mingw32-make.exe" -f Makefile.Release
robocopy /S "C:\Qt\5.15.0\mingw81_64\qml" bin
robocopy /S "C:\Qt\5.15.0\mingw81_64\bin" bin
mkdir bin\platforms
robocopy /S C:\Qt\5.15.0\mingw81_64\plugins\platforms bin\platforms