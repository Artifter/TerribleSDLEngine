
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>
#include <stdlib.h>

#include "GameSettings.hpp"
#include "RenderWindow.hpp"
#include "SnakeBody.hpp"
#include "InputHandler.hpp"
#include "EventHandler.hpp"





int main(int argc, char* args[]){

SDL_Init(SDL_INIT_VIDEO);
IMG_Init(IMG_INIT_PNG);

//int facingDirection = 0;  //0 right, 1 down, 2 left, 3 up
srand( time(NULL) );


RenderWindow window;
InputHandler input;
EventHandler eventHandler;




Entity playerEntity(screenW/2, screenH/2, window.loadTexture("res/gfx/rectangle.png"));
Entity cherry(rand()%(screenW-64), rand()% (screenH-64), window.loadTexture("res/gfx/cherry.png"));



unsigned int lastTime = 0, currentTime;


while (eventHandler.gameRunning)
{
        
    currentTime = SDL_GetTicks();
    if (currentTime > (lastTime + 1000/fps))/*fps*/
       {

        //std::cout<< "frame passed: "<< currentTime <<std::endl;
	        
			eventHandler.eventLoop(input);
			input.handleInputs();

	        window.clear();
	        window.render(cherry);
	        window.render(playerEntity);
	        window.display();


	        //end of the main loop
			lastTime = currentTime;
        }

       




 }   //input.keyAction();
return 0;
}