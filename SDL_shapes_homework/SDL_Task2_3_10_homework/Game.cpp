#include "Game.h"
#include <iostream>

//Constructor
Game::Game() {

	Game::gameWindow = NULL;
	Game::gameRenderer = NULL;
	Game::running = true;

}

//Destructor
Game::~Game() {
	clean();
}


//Initialise the game window, renderer and game state
bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

		gameWindow = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (gameWindow != 0)
		{

			gameRenderer = SDL_CreateRenderer(gameWindow, -1, 0);
			if (gameRenderer != 0)
			{


			}
			else {

				return false;

			}
		}
		else {

			return false;

		}
	}
	else {

		return false;

	}

	running = true;
	return true;

}

//Render the game objects
void Game::render() {


	//Background color
	SDL_SetRenderDrawColor(gameRenderer, 0, 0, 0, 255);
	SDL_RenderClear(gameRenderer);

	//Draw a red pentagon
	SDL_SetRenderDrawColor(gameRenderer, 255, 0, 0, 255);
	Shapes::drawPentagon(gameRenderer, 200, 200, 50);

	//Draw a blue hexagon
	SDL_SetRenderDrawColor(gameRenderer, 0, 0, 255, 255);
	Shapes::drawHexagon(gameRenderer, 400, 400, 50);

	SDL_RenderPresent(gameRenderer);

}

//Processes events
void Game::handleEvents() {
	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT:
			running = false;
			break;
		}
	}

}

//Update the game state and objects
void Game::update() {

	/*if (isMousePressed) {

		//Adjust the position so the center of the picture moves to the click location
		destinationRectangle.x = picPos.x - destinationRectangle.w / 2;
		destinationRectangle.y = picPos.y - destinationRectangle.h / 2;
		isMousePressed = false;
	}
	else {

		//Move the picture based on arrow key inputs
		destinationRectangle.x = picPos.x;
		destinationRectangle.y = picPos.y;
	}

	//Bound the picture's position to the window's dimensions
	int windowWidth, windowHeight;
	SDL_GetWindowSize(gameWindow, &windowWidth, &windowHeight);

	//Prevent the picture from moving outside the window's bounds
	destinationRectangle.x = max(0, min(windowWidth - destinationRectangle.w, destinationRectangle.x));
	destinationRectangle.y = max(0, min(windowHeight - destinationRectangle.h, destinationRectangle.y));

	//Update picPos to match the bounded position
	picPos.x = destinationRectangle.x;
	picPos.y = destinationRectangle.y;*/

}



//Cleans up the game
void Game::clean() {

	//Clean up the window and renderer
	SDL_DestroyWindow(gameWindow);
	SDL_DestroyRenderer(gameRenderer);
	SDL_Quit();

}

//Checks if the game is running
bool Game::isRunning() {

	return Game::running;

}