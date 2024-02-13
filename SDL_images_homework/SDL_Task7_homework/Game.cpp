#include "Game.h"
#include <iostream>

//Constructor
Game::Game() {

	Game::gameWindow = NULL;
	Game::gameRenderer = NULL;
	Game::running = true;
	//Task 7 Changes
	Game::picSpeed = 5;
	Game::isMousePressed = false;
	Game::picPos.x = (1000 / 2) - (destinationRectangle.w / 2);
	Game::picPos.y = (800 / 2) - (destinationRectangle.h / 2);
	//Task 7 Changes End
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


				sourceRectangle.x = 69;
				sourceRectangle.y = 103;
				sourceRectangle.w = 55;
				sourceRectangle.h = 55;

				//Task 7 Changes

				destinationRectangle.w = 110;
				destinationRectangle.h = 110;

				//Get the window dimensions
				int windowWidth = 1000;
				int windowHeight = 800;

				//Set the picture position to the center of the window
				picPos.x = (windowWidth / 2) - (destinationRectangle.w / 2);
				picPos.y = (windowHeight / 2) - (destinationRectangle.h / 2);

				//Task 7 Changes End

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

//Task 7 Changes
//Processes events
void Game::handleEvents() {

	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT:
			running = false;
			break;
			//Keyvboard events for moving the picture with arrow keys
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym) {
			case SDLK_UP:
				picPos.y -= picSpeed;
				break;
			case SDLK_DOWN:
				picPos.y += picSpeed;
				break;
			case SDLK_LEFT:
				picPos.x -= picSpeed;
				break;
			case SDLK_RIGHT:
				picPos.x += picSpeed;
				break;
			}
			break;

			//Mouse click event for moving the picture to the click location
		case SDL_MOUSEBUTTONDOWN:
			if (event.button.button == SDL_BUTTON_LEFT) {
				picPos.x = event.button.x;
				picPos.y = event.button.y;
				isMousePressed = true;
			}
			break;
		}
	}
}

//Update the game state and objects
void Game::update() {

	if (isMousePressed) {

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
	picPos.y = destinationRectangle.y;

}

//Task 7 Changes End

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