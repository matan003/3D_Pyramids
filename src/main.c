#include <stdlib.h>
#include <stdio.h>
#include "SDL2/SDL.h"

#include "triangle.h"

int main(int argc, char* argv[]){
    if(SDL_Init(SDL_INIT_VIDEO) != 0){
        printf("error initializing SDL: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window* win = SDL_CreateWindow("3D Pyramids",
                                       SDL_WINDOWPOS_CENTERED,
                                       SDL_WINDOWPOS_CENTERED,
                                       640, 640, 0);
    if(!win){
        printf("error creating window: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Renderer* Renderer = NULL;

    Renderer = SDL_CreateRenderer(win, -1, 0);

    drawTriangle(Renderer);

    SDL_Delay(5000);

    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}