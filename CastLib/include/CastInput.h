#ifndef CAST_INPUT_H
#define CAST_INPUT_H

#include <SDL2/SDL.h>
#include <stdbool.h>

typedef enum 
{
    CAST_KEY_W = SDL_SCANCODE_W,
    CAST_KEY_A = SDL_SCANCODE_A,
    CAST_KEY_S = SDL_SCANCODE_S,
    CAST_KEY_D = SDL_SCANCODE_D,

    CAST_KEY_SPACE = SDL_SCANCODE_SPACE,
    CAST_KEY_ESCAPE = SDL_SCANCODE_ESCAPE

} Cast_Key;

bool Cast_IsKeyDown(Cast_Key key);
void Cast_UpdateInput();

#endif