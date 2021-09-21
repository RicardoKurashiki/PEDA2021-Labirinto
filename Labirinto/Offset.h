#ifndef OFFSET_H
#define OFFSET_H

class Offset {
	int x, y;

public:
	Offset();
	Offset(int start_x, int start_y);
	int getX() { return x; }
	int getY() { return y; }
	void moveUp(int blocks);
	void moveDown(int blocks);
	void moveLeft(int blocks);
	void moveRight(int blocks);
};

#endif
#pragma once