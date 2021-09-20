#include "Offset.h"

Offset::Offset() {
	x = y = 0;
}

Offset::Offset(int start_x, int start_y)
{
	x = start_x;
	y = start_y;
}

void Offset::moveUp(int blocks)
{
	x -= blocks;
}

void Offset::moveDown(int blocks)
{
	x += blocks;
}

void Offset::moveLeft(int blocks)
{
	y -= blocks;
}

void Offset::moveRight(int blocks)
{
	y += blocks;
}