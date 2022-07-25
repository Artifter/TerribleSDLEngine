
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#include "RenderWindow.hpp"
#include "Entity.hpp"
#include "GameSettings.hpp"

RenderWindow::RenderWindow()
{

	window = SDL_CreateWindow(gameTitle , SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screenW, screenH, SDL_WINDOW_SHOWN);
	if (window == NULL)
	{
		std::cout << "Window has not initialized. Error: "<< SDL_GetError() << std::endl;
	}

	
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (renderer == NULL)
	{
		std::cout << "Renderer has not initialized. Error: "<< SDL_GetError() << std::endl;
	}	



}


void RenderWindow::clear()
{
	SDL_RenderClear(renderer);
}

SDL_Texture* RenderWindow::loadTexture(const char* texturePath)
{
	SDL_Texture* texture = NULL;
	texture = IMG_LoadTexture(renderer, texturePath);
	if(texture == NULL)
	{
		std::cout << "Can't load texture: "<< texturePath << " Error: "<< SDL_GetError()<< std::endl;
	}
	return texture;
}

void RenderWindow::display()
{
	SDL_RenderPresent(renderer);
}

void RenderWindow::render(Entity& p_entity)
{

SDL_Rect renderDst = p_entity.getDst();
SDL_RenderCopy(renderer, p_entity.getTexture(), NULL, &renderDst );
}