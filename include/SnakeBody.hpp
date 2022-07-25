#pragma once
#include <vector>

#include "Entity.hpp"
#include "RenderWindow.hpp"
//File containing created entities


class SnakeBody
{
public:
	SnakeBody(int p_x,int p_y,int p_numInRow);
	int getX;
	int getY;
	void changeX(int p_x);
	void changeY(int p_y);
private:
	int numInRow;
	SDL_Rect dst;



};
