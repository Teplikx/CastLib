#include "CastCore.h"

bool Cast_Init() {
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_Log("SDL Init Error: %s", SDL_GetError());
        return false;
    }
    return true;
}