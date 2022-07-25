
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>
#include <stdlib.h>

#include "GameSettings.hpp"
#include "RenderWindow.hpp"
#include "SnakeBody.hpp"
#include "InputHandler.hpp"
#include "MovementHandler.hpp"





std::vector<SDL_Event>& GetFrameEvents()
{
    static std::vector<SDL_Event> frame_events;
    return frame_events;
}




int main(int argc, char* args[]){

SDL_Init(SDL_INIT_VIDEO);
IMG_Init(IMG_INIT_PNG);

//int facingDirection = 0;  //0 right, 1 down, 2 left, 3 up
srand( time(NULL) );
bool gameRunning = true;
int score = 0;







RenderWindow window;
Entity playerEntity(screenW/2, screenH/2, window.loadTexture("res/gfx/rectangle.png"));
MovementHandler playerMov(playerEntity);

InputHandler input(playerMov);




Entity cherry(rand()%(screenW-64), rand()% (screenH-64), window.loadTexture("res/gfx/cherry.png"));



unsigned int lastTime = 0, currentTime;


while (gameRunning)
{
        
        currentTime = SDL_GetTicks();
        if (currentTime > (lastTime + 1000/fps))/*fps*/
            {

        //std::cout<< "frame passed: "<< currentTime <<std::endl;
        window.clear();
        window.render(cherry);
        window.render(playerEntity);
        window.display();
        playerMov.fall();
        while (SDL_PollEvent(&input.event))
        {
            GetFrameEvents().push_back(input.event);
        switch (input.event.type)
            {
                case SDL_QUIT:
                    gameRunning=false;;
                    break;

                case SDL_KEYDOWN:
                    if(input.event.key.keysym.sym==SDLK_a)
                        {playerMov.moveLeft();}
                    if(input.event.key.keysym.sym==SDLK_d)
                        {playerMov.moveRight();}
                    break;
                case SDL_KEYUP:
                      break;
            }


                    //input.handleKeyboardEvent();
                }
            

lastTime = currentTime;
    GetFrameEvents().clear();
            }

       




        }   //input.keyAction();
    

   
    
    








 

return 0;
}