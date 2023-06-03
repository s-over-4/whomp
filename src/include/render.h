#ifndef RENDER_H
#define RENDER_H

#include "util.h"
#include "window.h"

#include <SDL2/SDL.h>


SDL_GLContext render_gl_init(SDL_Window* win);
void render_gl_quit(SDL_GLContext* ctx);


#endif
