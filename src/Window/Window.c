#include "CastWindow.h"

CastWindow Cast_CreateWindow(const char* title, int width, int height)
{
    CastWindow win;

    win.window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, 0);

    win.renderer = SDL_CreateRenderer(win.window, -1, SDL_RENDERER_ACCELERATED);

    win.width = width;
    win.height = height;

    return win;
}

void Cast_DestroyWindow(CastWindow* window)
{
    SDL_DestroyRenderer(window->renderer);
    SDL_DestroyWindow(window->window);
    SDL_Quit();
}
