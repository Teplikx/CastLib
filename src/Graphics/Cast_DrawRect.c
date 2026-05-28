#include "CastGraphics.h"

void Cast_DrawRect(CastWindow* window, int x, int y, int w, int h) {
    SDL_Rect rect = { x, y, w, h};

    SDL_RenderFillRect(window->renderer, &rect);
}