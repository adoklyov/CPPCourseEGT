#ifndef SHAPES_H
#define SHAPES_H
#include "Game.h"

class Shapes {

public:

	//Methods
	static void drawShapeByChoice(SDL_Renderer* gameRenderer, int choice, int x, int y, int w, int h, int thickness);

};

#endif