#ifndef WINDOW_H 
#define WINDOW_H

#include <GL/gl.h>
#include <SDL2/SDL.h>

#define WIN_W  800
#define WIN_H  600


// general SDL functions
void window_sdl_init();
void window_sdl_quit();

// window creation
SDL_Window* window_init(const char* title);
SDL_Renderer* window_renderer_init(SDL_Window* w);

#endif
