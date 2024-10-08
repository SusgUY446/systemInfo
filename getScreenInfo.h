/*
screenInfo/getScreenInfo.h

Author: SusgUY446 (https://github.com/susguy446)
License: GPL 3.0
*/

// Types and Structs
typedef struct ScreenInfo {
    int screenWidth;
    int screenHeight;
    int refreshRate;
} ScreenInfo;



// Function Declarations
ScreenInfo GetScreenInfo();

