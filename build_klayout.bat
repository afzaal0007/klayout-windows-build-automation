@echo off
SETLOCAL ENABLEEXTENSIONS

echo ===== KLAYOUT BUILD STARTED =====
echo Build Date: %DATE% %TIME%
echo.

:: -------------------------------
:: ✅ Paths Configured for This System
:: -------------------------------
set QT_PATH=C:\Qt3\6.5.3\msvc2019_64
set VCPKG_PATH=C:\vcpkg\installed\x64-windows
set ZLIB_INCLUDE=%VCPKG_PATH%\include
set ZLIB_LIB=%VCPKG_PATH%\lib
set KLAYOUT_DIR=D:\Afzaal\C-Python\klayout-master\klayout-master
set KLAYOUT_BITS=c:\klayout-bits

echo Qt Path: %QT_PATH%
echo Zlib Include: %ZLIB_INCLUDE%
echo Zlib Lib: %ZLIB_LIB%
echo KLayout Directory: %KLAYOUT_DIR%
echo KLayout Bits: %KLAYOUT_BITS%
echo.

:: -------------------------------
:: ✅ Verify Required Paths Exist
:: -------------------------------
echo === Verifying Dependencies...
if not exist "%QT_PATH%\bin\qmake.exe" (
    echo ❌ ERROR: Qt qmake not found at %QT_PATH%\bin\qmake.exe
    pause
    exit /b 1
)
echo ✅ Qt qmake found

if not exist "%ZLIB_INCLUDE%\zlib.h" (
    echo ❌ ERROR: zlib.h not found at %ZLIB_INCLUDE%\zlib.h
    pause
    exit /b 1
)
echo ✅ Zlib headers found

if not exist "%ZLIB_LIB%\zlib.lib" (
    echo ❌ ERROR: zlib.lib not found at %ZLIB_LIB%\zlib.lib
    pause
    exit /b 1
)
echo ✅ Zlib library found

if not exist "%KLAYOUT_BITS%" (
    echo ❌ ERROR: KLayout bits not found at %KLAYOUT_BITS%
    pause
    exit /b 1
)
echo ✅ KLayout bits found
echo.

:: -------------------------------
:: ✅ Set Environment for MSVC
:: -------------------------------
echo === Setting up MSVC Environment...
call "C:\Program Files\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
if %ERRORLEVEL% NEQ 0 (
    echo ❌ Failed to initialize MSVC environment
    pause
    exit /b %ERRORLEVEL%
)
echo ✅ MSVC environment initialized
echo.

:: -------------------------------
:: ✅ Set zlib include/lib paths
:: -------------------------------
echo === Setting Environment Variables...
set INCLUDE=%ZLIB_INCLUDE%;%INCLUDE%
set LIB=%ZLIB_LIB%;%LIB%
set KLAYOUT_VERSION_DATE=2025-06-26
echo ✅ Environment variables set
echo.

:: -------------------------------
:: ✅ Navigate to KLayout Directory
:: -------------------------------
cd /d "%KLAYOUT_DIR%"
if %ERRORLEVEL% NEQ 0 (
    echo ❌ Failed to navigate to KLayout directory
    pause
    exit /b %ERRORLEVEL%
)
echo Current Directory: %CD%
echo.

:: -------------------------------
:: ✅ Clean Previous Builds (Optional)
:: -------------------------------
echo === Cleaning Previous Build...
if exist build_log.txt del build_log.txt
if exist Makefile del Makefile
if exist build-temp rmdir /s /q build-temp
echo ✅ Previous build files cleaned
echo.

:: -------------------------------
:: ✅ Run the Proven Build Command
:: -------------------------------
echo === Starting KLayout Build (This may take several hours)...
echo Using the same command that worked successfully before:
echo.

.\build.bat -bits "%KLAYOUT_BITS%" -qmake "%QT_PATH%\bin\qmake.exe" > build_log.txt 2>&1

if %ERRORLEVEL% NEQ 0 (
    echo ❌ Build failed with error code %ERRORLEVEL%
    echo Check build_log.txt for details
    echo.
    echo Last 20 lines of build log:
    echo ================================
    type build_log.txt | more +20 
    pause
    exit /b %ERRORLEVEL%
)

:: -------------------------------
:: ✅ Verify Build Success
:: -------------------------------
echo === Verifying Build Results...
set BUILD_SUCCESS=0

echo Checking for KLayout DLL files...
dir /b klayout*.dll >nul 2>&1
if %ERRORLEVEL% EQU 0 (
    set BUILD_SUCCESS=1
    echo ✅ KLayout DLL files found:
    dir klayout*.dll /o:d
    echo.
)

if %BUILD_SUCCESS% EQU 1 (
    echo ======================================
    echo ✅ BUILD COMPLETED SUCCESSFULLY! ✅
    echo ======================================
    echo.
    echo Build artifacts created:
    dir klayout*.dll | find /c ".dll"
    echo KLayout DLL files found
    echo.
    echo Build log saved to: build_log.txt
    echo Build completed at: %DATE% %TIME%
    echo.
    echo You can now use KLayout through Python:
    echo   python -c "import sys; sys.path.append('build/lib.win-amd64-cpython-313'); import klayout"
    echo.
) else (
    echo ❌ Build appears to have failed - no KLayout DLL files found
    echo Check build_log.txt for details
    pause
    exit /b 1
)

echo Press any key to exit...
pause >nul
ENDLOCAL
