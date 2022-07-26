#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "GameSettings.hpp"
#include "Entity.hpp"



class RenderWindow
{
public:
	RenderWindow();
	void clear();
	void render(Entity& p_entity);
	void display();


	
	SDL_Texture* loadTexture(const char* texturePath);


private:
	SDL_Renderer* renderer = NULL;
	SDL_Window* window = NULL;
	const char* gameTitle = "Test app";
};
