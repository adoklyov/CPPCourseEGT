#include "Shapes.h"

//Methods

//Method to draw an empty rectangle with given line thickness
void Shapes::drawEmptyRectangle(SDL_Renderer* gameRenderer, int x, int y, int w, int h, int thickness) {

	SDL_Rect topLine = { x, y, w, thickness };
	SDL_RenderFillRect(gameRenderer, &topLine);

	SDL_Rect bottomLine = { x, y + h - thickness, w, thickness };
	SDL_RenderFillRect(gameRenderer, &bottomLine);

	SDL_Rect leftLine = { x, y, thickness, h };
	SDL_RenderFillRect(gameRenderer, &leftLine);

	SDL_Rect rightLine = { x + w - thickness, y, thickness, h };
	SDL_RenderFillRect(gameRenderer, &rightLine);

}