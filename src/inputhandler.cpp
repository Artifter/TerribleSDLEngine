#include "InputHandler.hpp"
#include <iostream>
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