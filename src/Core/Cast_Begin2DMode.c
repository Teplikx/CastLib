#include "CastCore.h"

void Cast_Begin2DMode(SDL_Renderer* rend) {
    SDL_SetRenderDrawColor(rend, 20, 20, 20, 255);
    SDL_RenderClear(rend);
}