#include "Game.h"
#include <iostream>

//Constructor
Game::Game() {

	Game::gameWindow = NULL;
	Game::gameRenderer = NULL;
	Game::running = true;
	Game::speed = 1;

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

				SDL_SetRenderDrawColor(gameRenderer, 0, 0, 0, 0);

				SDL_Surface* tempSurface = SDL_LoadBMP("assets/images/yalla.bmp");

				texture = SDL_CreateTextureFromSurface(gameRenderer, tempSurface);

				SDL_FreeSurface(tempSurface);

				SDL_QueryTexture(texture, NULL, NULL, &sourceRectangle.w, &sourceRectangle.h);

				//Set the source rectangle
				sourceRectangle.x = 69;
				sourceRectangle.y = 103;
				sourceRectangle.w = 55;
				sourceRectangle.h = 55;

				//Set the destination rectangle
				destinationRectangle.x = 0;
				destinationRectangle.y = 0;
				destinationRectangle.w = 110;
				destinationRectangle.h = 110;

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

	SDL_RenderClear(gameRenderer);

	SDL_RenderCopy(gameRenderer, texture, &sourceRectangle, &destinationRectangle);

	SDL_RenderPresent(gameRenderer);
}

//Processes events
void Game::handleEvents() {

	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		default: break;

		}
	}
}

//Update the game state and objects
void Game::update() {

	//Task 1 - Make the picture move from left to right and back
	int ww, wh;
	SDL_GetWindowSize(gameWindow, &ww, &wh);
	destinationRectangle.y = (wh - destinationRectangle.h) / 2;

	if (SDL_GetTicks() % 35 == 0) {
		destinationRectangle.x += speed;

		//Window boundaries
		if ((destinationRectangle.x + destinationRectangle.w >= ww) || (destinationRectangle.x <= 0)) {
			speed *= -1;
			//Change speed on each bounce
			if (speed < 0) speed--;
			else speed++;
		}
	}
}
//Task 1 End

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