#include "MovementHandler.hpp"
#include "GameSettings.hpp"
#include <iostream>

MovementHandler::MovementHandler(Entity& p_entity)
:entityPosX(p_entity.getDst().x), entityPosY(p_entity.getDst().y), entity(p_entity)
{}

void MovementHandler::moveLeft()
{
	entityPosX = entityPosX - velocity;
	entity.changeX(entityPosX);
}
void MovementHandler::moveRight()
{
	entityPosX = entityPosX + velocity;
	entity.changeX(entityPosX);
}
void MovementHandler::jump()
{
	
}


void MovementHandler::move()
{
	if(isMovingLeft==1)
		moveLeft();
	if(isMovingRight==1)
		moveRight();
}


void MovementHandler::fall()
{
	
	if (entity.getDst().y+0.5*gravity*time*time <screenH-64)
		{time ++;
			entityPosY = entityPosY +0.5*gravity*time*time;
		entity.changeY(entityPosY);}
	std::cout << entity.getDst().y << std::endl;
}
