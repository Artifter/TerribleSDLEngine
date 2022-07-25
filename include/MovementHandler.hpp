#pragma once
#include "Entity.hpp"
#include "GameSettings.hpp"

class MovementHandler
{
public:
MovementHandler(Entity& p_entity);

void moveLeft();
void moveRight();
void jump();
void move();
void fall();

bool isMovingLeft = 0;
bool isMovingRight = 0;
private:
	float entityPosX;
	float entityPosY;
	Entity& entity;
	int time =0;
};
