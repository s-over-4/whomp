#include "include/window.h"
#include "include/render.h"


int main(int argc, char** argv) {
   window_sdl_init();
   SDL_Window* win = window_init("whomp");
   SDL_Surface* sur = window_surface_init(win);
   SDL_Surface* can = window_canvas_init();

   Uint32* buf = (Uint32*) can->pixels;

   int row = 0;
   int col = 0;
   int off;
   int fin = 0;
   Uint32 clr;
   SDL_Event evt;

   SDL_LockSurface(can);

   while (row < WIN_H) {
      col = 0;
      while (col < WIN_W) {
         off = row * WIN_W + col;
         clr = SDL_MapRGBA(can->format, (col % 255), (col % 255), (col % 255), 255);
         buf[off] = clr;
         col ++;
      }
      row++;
   }

   SDL_UnlockSurface(can);
   
   while (!fin) {
      while (SDL_PollEvent(&evt)) {
         if (evt.type == SDL_QUIT) { fin = 1; }
      }

      SDL_BlitSurface(can, 0, sur, 0);
      SDL_UpdateWindowSurface(win);

      SDL_Delay(10);
   }

   window_sdl_quit();

   return 0;
}
