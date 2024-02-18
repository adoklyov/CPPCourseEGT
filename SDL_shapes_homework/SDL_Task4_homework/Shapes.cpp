#include "Shapes.h"

//Methods

//Method to draw a shape based on user choice, excluding (rectangle, circle, pentagon, hexagon)
void Shapes::drawShapeByChoice(SDL_Renderer* gameRenderer, int choice, int x, int y, int w, int h, int thickness) {

	switch (choice) {
	case 1:
		drawEmptyRectangle(gameRenderer, x, y, w, h, thickness);
		break;
	case 2:
		drawEmptyCircle(gameRenderer, x, y, w, h, thickness);
		break;
	case 3:
		drawEmptyPentagon(gameRenderer, x, y, w, h, thickness);
		break;
	case 4:
		drawEmptyHexagon(gameRenderer, x, y, w, h, thickness);
		break;
	}

}