#include "Entity.hpp"
#include "RenderWindow.hpp"

Entity::Entity(float p_x, float p_y, SDL_Texture* p_tex)
	{
	dst.x = p_x;
	dst.y = p_y;
	dst.w = 64;
	dst.h = 64;
	texture = p_tex;
}

SDL_Texture* Entity::getTexture()
{
	return texture;
}




	SDL_Rect Entity::getDst()
	{
		return dst;
	}


void Entity::changeX(float p_x)
{
	dst.x = p_x;
}

void Entity::changeY(float p_y)
{
	dst.y = p_y;
}

void Entity::randomPos()
{
	dst.x = rand()%(screenW-64);
	dst.y = rand()%(screenH-64);
}