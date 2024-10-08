#include "getScreenInfo.h"
#if defined(_WIN32)
    #include <windows.h>
    ScreenInfo GetScreenInfo() {
        ScreenInfo info;
        info.screenWidth = GetSystemMetrics(SM_CXSCREEN);
        info.screenHeight = GetSystemMetrics(SM_CYSCREEN);

        DEVMODE dm;
        ZeroMemory(&dm, sizeof(dm));
        dm.dmSize = sizeof(dm);
        EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm);
        info.refreshRate = dm.dmDisplayFrequency;
        return info;
    }
#endif // _WIN32


#if defined(LINUX)
    ScreenInfo GetScreenInfo() {
        ScreenInfo info;
        info.screenWidth = 0;
        info.screenHeight = 0;
    }

#endif // LINUX
