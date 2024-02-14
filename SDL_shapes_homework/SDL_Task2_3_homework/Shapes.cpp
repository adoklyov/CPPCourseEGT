#include "Shapes.h"

//Methods

//Method to draw a pentagon
void Shapes::drawPentagon(SDL_Renderer* gameRenderer, int x, int y, int side) {
	//Draws a red pentagon
	SDL_SetRenderDrawColor(gameRenderer, 255, 0, 0, 255);
	SDL_RenderDrawLine(gameRenderer, x, y - side, x + side, y - side / 2);
	SDL_RenderDrawLine(gameRenderer, x + side, y - side / 2, x + side / 2, y + side / 2);
	SDL_RenderDrawLine(gameRenderer, x + side / 2, y + side / 2, x - side / 2, y + side / 2);
	SDL_RenderDrawLine(gameRenderer, x - side / 2, y + side / 2, x - side, y - side / 2);
	SDL_RenderDrawLine(gameRenderer, x - side, y - side / 2, x, y - side);

}

//Method to draw a hexagon
void Shapes::drawHexagon(SDL_Renderer* gameRenderer, int x, int y, int side) {
	//Draws a hexagon
	SDL_SetRenderDrawColor(gameRenderer, 0, 255, 0, 255);
	SDL_RenderDrawLine(gameRenderer, x, y - side, x + side, y - side / 2);
	SDL_RenderDrawLine(gameRenderer, x + side, y - side / 2, x + side, y + side / 2);
	SDL_RenderDrawLine(gameRenderer, x + side, y + side / 2, x, y + side);
	SDL_RenderDrawLine(gameRenderer, x, y + side, x - side, y + side / 2);
	SDL_RenderDrawLine(gameRenderer, x - side, y + side / 2, x - side, y - side / 2);
	SDL_RenderDrawLine(gameRenderer, x - side, y - side / 2, x, y - side);
}