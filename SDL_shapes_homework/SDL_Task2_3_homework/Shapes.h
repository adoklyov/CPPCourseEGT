#ifndef SHAPES_H
#define SHAPES_H
#include "Game.h"

class Shapes {

public:

	//Methods
	static void drawPentagon(SDL_Renderer* gameRenderer, int x, int y, int side);
	static void drawHexagon(SDL_Renderer* gameRenderer, int x, int y, int side);

};

#endif