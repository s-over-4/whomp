#ifndef WINDOW_H 
#define WINDOW_H

#include <GL/gl.h>
#include <SDL2/SDL.h>

#define WIN_W     800
#define WIN_H     600
#define WIN_BPP   0


// general SDL functions
void window_sdl_init();
void window_sdl_quit();

// window creation
SDL_Window* window_init(const char* title);

// lowest render abstraction layer
SDL_Surface* window_surface_init(SDL_Window* win);
SDL_Surface* window_canvas_init();

#endif
