#pragma once

#include <SDL2/SDL.h>
#include "InputHandler.hpp"
#include <vector>
#include <iostream>

struct InputHandler
{
public:
	
	InputHandler();
	void pressedKeyD();
	void pressedKeyA();
	void pressedKeySpace();
	void getPressedKey(SDL_Event event);
	void getReleasedKey(SDL_Event event);

	void handleInputs();
	
	// bool isPressed(keyCode) {
 //        return (keyState[keyCode] == PRESSED);
 //    }

 //    bool isReleased(keyCode) {
 //        return (keyState[keyCode] == RELEASED);
 //    }



	// keyState[];
private:
	
	std::vector<SDL_Keycode> pressedKeys;
	std::vector<SDL_Keycode> releasedKeys;
	std::vector<int> testVector;





	// bool aPressed;
	// bool bPressed;
	// const SDL_Keycode kbW = SDLK_w;
	// const SDL_Keycode kbS = SDLK_s;
	// const SDL_Keycode kbA = SDLK_a;
	// const SDL_Keycode kbD = SDLK_d;
	// const SDL_Keycode kbSpace = SDLK_SPACE;
	
	
};