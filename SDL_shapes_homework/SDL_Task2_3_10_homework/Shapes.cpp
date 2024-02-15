#include "Shapes.h"

//Methods

//Method to draw a pentagon
void Shapes::drawPentagon(SDL_Renderer* gameRenderer, int x, int y, int side) {

	const int sides = 5;
	const double R = side / (2 * sin(M_PI / 5));
	const double angles = 2 * M_PI / sides;

	for (int i = 0; i < sides; i++) {
		double angle1 = angles * i;
		double angle2 = angles * (i + 1);
		SDL_RenderDrawLine(gameRenderer, x + R * cos(angle1), y + R * sin(angle1), x + R * cos(angle2), y + R * sin(angle2));
	}

}

//Method to draw a hexagon
void Shapes::drawHexagon(SDL_Renderer* gameRenderer, int x, int y, int side) {

	const int sides = 6;
	const double R = side / (2 * sin(M_PI / 6));
	const double angles = 2 * M_PI / sides;

	for (int i = 0; i < sides; i++) {
		double angle1 = angles * i;
		double angle2 = angles * (i + 1);
		SDL_RenderDrawLine(gameRenderer, x + R * cos(angle1), y + R * sin(angle1), x + R * cos(angle2), y + R * sin(angle2));
	}
}

//Method to draw an ellipse
void Shapes::drawEllipse(SDL_Renderer* gameRenderer, int x, int y, int a, int b) {

	double angle = 0;
	double x1 = x + a * cos(angle);
	double y1 = y + b * sin(angle);

	for (int i = 1; i < 360; i++) {
		angle = i * M_PI / 180;
		double x2 = x + a * cos(angle);
		double y2 = y + b * sin(angle);
		SDL_RenderDrawLine(gameRenderer, x1, y1, x2, y2);
		x1 = x2;
		y1 = y2;
	}
}