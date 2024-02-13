#include "Game.h"
#include <iostream>

//Constructor
Game::Game() {

	Game::currentQuadrant = -1;
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

				SDL_SetRenderDrawColor(gameRenderer, 255, 255, 255, 255);

				SDL_Surface* tempSurface = SDL_LoadBMP("C:/Users/Doklyov/Desktop/IChernevTask/SDLTask5/assets/images/cat.bmp");

				texture = SDL_CreateTextureFromSurface(gameRenderer, tempSurface);

				SDL_FreeSurface(tempSurface);

				SDL_QueryTexture(texture, NULL, NULL, &sourceRectangle.w, &sourceRectangle.h);


				sourceRectangle.x = 69;
				sourceRectangle.y = 103;
				sourceRectangle.w = 55;
				sourceRectangle.h = 55;

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


//Task 5 Changes
//Render the game objects
void Game::render() {
	SDL_RenderClear(gameRenderer);

	//Render quadrant if it is active
	if (currentQuadrant >= 0) {
		int windowWidth, windowHeight;
		SDL_GetWindowSize(gameWindow, &windowWidth, &windowHeight);

		//Calculate destination based on the current quadrant
		SDL_Rect destRect = destinationRectangle;
		switch (currentQuadrant) {
			//Top Left Quadrant
		case 0:
			destRect.x = 0;
			destRect.y = 0;
			break;
			//Top Right Quadrant
		case 1:
			destRect.x = windowWidth / 2;
			destRect.y = 0;
			break;
			//Bottom Left Quadrant
		case 2:
			destRect.x = 0;
			destRect.y = windowHeight / 2;
			break;
			//Bottom Right Quadrant
		case 3:
			destRect.x = windowWidth / 2;
			destRect.y = windowHeight / 2;
			break;
		}


		SDL_RenderCopy(gameRenderer, texture, NULL, &destRect);
	}

	SDL_RenderPresent(gameRenderer);
}


//Processes events
void Game::handleEvents() {
	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		if (event.type == SDL_QUIT) {
			running = false;
		}
		else if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT) {
			int windowWidth, windowHeight;
			SDL_GetWindowSize(gameWindow, &windowWidth, &windowHeight);
			int midX = windowWidth / 2;
			int midY = windowHeight / 2;

			int x = event.button.x;
			int y = event.button.y;
			int quadrant = (x > midX) + (y > midY) * 2;
			currentQuadrant = (currentQuadrant == quadrant) ? -1 : quadrant;
		}
	}
}

//Task 5 Changes End

//Update the game state and objects
void Game::update() {

	/*int ww, wh;
	SDL_GetWindowSize(gameWindow, &ww, &wh);
	destinationRectangle.y = (wh - destinationRectangle.h) / 2;

	if (SDL_GetTicks() % 35 == 0) {
		//destinationRectangle.x += speed;

		//Window boundaries
		if ((destinationRectangle.x + destinationRectangle.w >= ww) || (destinationRectangle.x <= 0)) {
			//speed *= -1;
			//Change speed on each bounce
			//if (speed < 0) speed--;
			//else speed++;
		}
	}*/
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