#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>


class Entity
{
public:
	Entity(float p_x,float p_y, SDL_Texture* p_tex);
	SDL_Texture* getTexture();
	SDL_Rect getDst();
	void changeX(float p_x);
	void changeY(float p_y);
	void randomPos();
private:
	SDL_Rect textureSource;
	SDL_Rect dst;
	SDL_Texture* texture;
	

};

