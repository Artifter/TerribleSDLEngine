#include "Math.hpp"
#include <math.h>       /* sqrt */

Vector2::Vector2(float p_x, float p_y)
:x(p_x), y(p_y)
{}

float Vector2::getModulus()
{
	return sqrt(x*x+y*y);
}