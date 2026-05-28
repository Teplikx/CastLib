// ! CastCore.h

#ifndef CAST_CORE_H
#define CAST_CORE_H

#include <SDL2/SDL.h>
#include <stdbool.h>

bool Cast_Init();
void Cast_Quit();

void Cast_Begin2DMode(SDL_Renderer* rend);
void Cast_End2DMode(SDL_Renderer* rend);

#endif