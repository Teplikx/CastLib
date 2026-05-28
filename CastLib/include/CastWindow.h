// ! CastWindow.h

#ifndef CAST_WINDOW_H
#define CAST_WINDOW_H

#include <SDL2/SDL.h>

typedef struct
{
	SDL_Window* window;
	SDL_Renderer* renderer;

	int width;
	int height;

} CastWindow;

CastWindow Cast_CreateWindow(const char* title, int width, int height);
void Cast_DestroyWindow(CastWindow* win);

#endif
