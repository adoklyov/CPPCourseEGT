#include "Shapes.h"

//Methods

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