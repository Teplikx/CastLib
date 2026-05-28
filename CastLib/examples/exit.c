// Core
#include <CastCore.h>

// Window
#include <CastWindow.h>

// Input
#include <CastInput.h>

#include <stdbool.h>

int main(void)
{
    // Init CastLib
    if (!Cast_Init()) {return 1;}

    // Create window
    CastWindow window = Cast_CreateWindow("CastLib", 800, 600);

    bool running = true;

    while (running)
    {
        // Update input
        Cast_UpdateInput();

        // Exit
        if (Cast_IsKeyDown(CAST_KEY_ESCAPE))
        {
            running = false;
        }
    }

    // Destroy window
    Cast_DestroyWindow(&window);

    // Quit CastLib
    Cast_Quit();

    return 0;
}