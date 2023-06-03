#include "include/render.h"

SDL_GLContext render_gl_init(SDL_Window* win) {
   SDL_GLContext ctx;

   SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
   SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);

   SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
   SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);

   ctx = SDL_GL_CreateContext(win);

   if (ctx == NULL) {
      die("SDL_GL_CreateContext error:", "%s", SDL_GetError());
   }

   SDL_GL_SetSwapInterval(1);

   return ctx;
}
