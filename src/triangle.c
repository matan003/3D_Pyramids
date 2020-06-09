#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <SDL2/SDL.h>

void drawTriangle(SDL_Renderer* Renderer){
    SDL_SetRenderDrawColor(Renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);

    SDL_RenderClear(Renderer);

    SDL_SetRenderDrawColor(Renderer, 255, 255 ,255, SDL_ALPHA_OPAQUE);

    SDL_RenderDrawLine(Renderer, 0, 480, 320, 0);
    SDL_RenderDrawLine(Renderer, 640, 480, 320, 0);
    SDL_RenderDrawLine(Renderer, 0, 480, 640, 480);

    SDL_RenderPresent(Renderer);
}

#endif