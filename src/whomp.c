#include "include/window.h"


int main(int argc, char** argv) {
   window_sdl_init();
   SDL_Window* window = window_init("whomp");
   SDL_Renderer* renderer = window_renderer_init(window);

   SDL_Delay(1000);

   window_sdl_quit();

   return 0;
}
