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

SDL_Surface* window_surface_init(SDL_Window* win) {
   SDL_Surface* surf = SDL_GetWindowSurface(win);
   return surf;
} 

SDL_Surface* window_canvas_init() {
   SDL_Surface* can = SDL_CreateRGBSurfaceWithFormat(
      0, WIN_W, WIN_H, 32, SDL_PIXELFORMAT_RGBA8888
   );
   return can;
}
