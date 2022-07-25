#include "SnakeBody.hpp"
#include "RenderWindow.hpp"

SnakeBody::SnakeBody(int p_x, int p_y, int p_numInRow)
:numInRow(p_numInRow)
{
	dst.x = p_x;
	dst.y = p_y;
	dst.w = 64;
	dst.h = 64;
}