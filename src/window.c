#include "include/window.h"
#include "include/util.h"

void window_sdl_init() {
   if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_EVENTS) != 0) {
      die("SDL_Init error:", "%s", SDL_GetError());
   } 
}

void window_sdl_quit() { SDL_Quit(); die("exited cleanly"); }

SDL_Window* window_init(const char* title) {
   SDL_Window* w = SDL_CreateWindow(
      title,                        // window title
      SDL_WINDOWPOS_CENTERED,       // window x pos
      SDL_WINDOWPOS_CENTERED,       // window y pos
      WIN_W,                        // window width
      WIN_H,                        // window height
      SDL_WINDOW_OPENGL             // window mode
   );

   if (w == NULL) {
      die("SDL_CreateWindow error:", "%s", SDL_GetError());
   }

   return w;
}

SDL_Renderer* window_renderer_init(SDL_Window* w) {
   SDL_Renderer* r = SDL_CreateRenderer(
      w,                         // the window to render to
      -1,                        // driver to initialize
      SDL_RENDERER_ACCELERATED   // renderer mode
   );

   if (r == NULL) {
      die("SDL_CreateRenderer error:", "%s", SDL_GetError());
   }

   return r;
}
