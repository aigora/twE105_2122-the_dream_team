#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

static const int width = 800;
static const int height = 600;

int main(int argc, char **argv)
{
    //initialize SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    //create an sdl window
    SDL_Window *window = SDL_CreateWindow("Hello, SDL2", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_OPENGL);

    //create a renderer (accelerated and in sync with the display refresh rate)
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);

    //INITIALIZE SUPPORT FOR LOADING PNG AND JPEG IMAGES
    IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG);

    //load and image file
    SDL_Surface *image = IMG_Load("layton1_ejemplo.jpg");
    SDL_Texture * image_texture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_FreeSurface(image);

    //Define where on the "screen" we want to draw the texture
    SDL_Rect texture_destination;
    texture_destination.x = 0;
    texture_destination.y = 0;
    texture_destination.w = 250;
    texture_destination.h = 250;

    bool running = true;
    SDL_Event event;
    while (running)
    {
        //process events
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
            {
                running = false;
            }
        }

        //clear screen
        SDL_RenderClear(renderer);

        //draw
        SDL_RenderCopy(renderer, image_texture, NULL, &texture_destination);

        //show what was draw
        SDL_RenderPresent(renderer);

    }



    //release resources
    SDL_DestroyTexture(image_texture);
    IMG_Quit();
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
