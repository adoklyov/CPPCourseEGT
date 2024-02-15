#ifndef SHAPES_H
#define SHAPES_H
#include "Game.h"

class Shapes {

public:

	//Methods
	static void drawPentagon(SDL_Renderer* gameRenderer, int x, int y, int r);
	static void drawHexagon(SDL_Renderer* gameRenderer, int x, int y, int r);
	static void drawEllipse(SDL_Renderer* gameRenderer, int x, int y, int rx, int ry);
	static void drawEmptyRectangle(SDL_Renderer* gameRenderer, int x, int y, int w, int h, int thickness);
};

#endif