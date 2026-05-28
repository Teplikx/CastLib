 // Core
#include <CastCore.h>

// Window
#include <CastWindow.h>

// Graphics
#include <CastGraphics.h>

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
        // Begin drawing
        Cast_Begin2DMode(window.renderer);

            SDL_SetRenderDrawColor(window.renderer, 255, 155, 255, 255);

            Cast_DrawRect(&window, 300, 220, 200, 150);

        // End drawing
        Cast_End2DMode(window.renderer);
    }

    // Destroy window
    Cast_DestroyWindow(&window);

    // Quit CastLib
    Cast_Quit();

    return 0;
}