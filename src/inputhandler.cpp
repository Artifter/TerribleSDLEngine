#include "InputHandler.hpp"
#include <iostream>
#include <vector>
#include "EventHandler.hpp"
// 
InputHandler::InputHandler()
{}

// void InputHandler::handleKeyboardEvent()
// {
//     keyState[event.code] =  event.state;
    
// }


void InputHandler::getPressedKey(SDL_Event event)
{
	pressedKeys.push_back(event.key.keysym.sym);
}


void InputHandler::getReleasedKey(SDL_Event event)
{
	pressedKeys.push_back(event.key.keysym.sym);
}


void InputHandler::handleInputs()
{
	unsigned int vectorSize = pressedKeys.size();
	if(vectorSize>0)
	{
		for (unsigned int i =0; i <= vectorSize; i++)
		{	
			switch(pressedKeys[i])
			{
				case SDLK_d:
				std::cout << "Pressed d \n";
				break;
				case SDLK_a:
				std::cout << "Pressed a \n";
				break;
			}
		}
		pressedKeys.clear();

	}
}