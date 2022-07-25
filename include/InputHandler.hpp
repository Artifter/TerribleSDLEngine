#pragma once

#include <SDL2/SDL.h>
#include <MovementHandler.hpp>

struct InputHandler
{
public:
	
	InputHandler(MovementHandler& p_movHandl);
	void keyAction();
	void handleKeyboardEvent();
	
	// bool isPressed(keyCode) {
 //        return (keyState[keyCode] == PRESSED);
 //    }

 //    bool isReleased(keyCode) {
 //        return (keyState[keyCode] == RELEASED);
 //    }



	SDL_Event event;
	// keyState[];



private:
	MovementHandler& playerMover;
	// bool aPressed;
	// bool bPressed;
	// const SDL_Keycode kbW = SDLK_w;
	// const SDL_Keycode kbS = SDLK_s;
	// const SDL_Keycode kbA = SDLK_a;
	// const SDL_Keycode kbD = SDLK_d;
	// const SDL_Keycode kbSpace = SDLK_SPACE;
	
	
};