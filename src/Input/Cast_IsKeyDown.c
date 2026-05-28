#include "CastInput.h"

static const Uint8* keyboard = NULL;

void Cast_UpdateInput()
{
    SDL_PumpEvents();
    keyboard = SDL_GetKeyboardState(NULL);
}

bool Cast_IsKeyDown(Cast_Key key)
{
    return keyboard[key];
}