#include "Game.h"
#include <iostream>

//Constructor
Game::Game() {

	Game::gameWindow = NULL;
	Game::gameRenderer = NULL;
	Game::running = true;
	Game::currentFrame = 0;

}

//Destructor
Game::~Game() {
	clean();
}


//Initialise the game window, renderer and game state
bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

		gameWindow = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (gameWindow == nullptr) {
			return false;
		}

		gameRenderer = SDL_CreateRenderer(gameWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
		if (gameRenderer == nullptr) {
			return false;
		}

		if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
			return false;
		}

		//Load the sprite texture 
		bool textureLoaded = TextureManager::Instance()->loadTexture("C:/Users/Doklyov/Desktop/IChernevTask/SDLTask8/assets/images/sprite2.png", "sprite", gameRenderer);
		if (!textureLoaded) {
			return false;
		}

		running = true;
		return true;
	}
	else {
		return false;
	}
}

//Render the game objects
void Game::render() {

	SDL_RenderClear(gameRenderer);

	//Draw the sprite
	TextureManager::Instance()->drawOneFrameFromTexture("sprite", 450, 350, frameWidth, frameHeight, spriteRow, currentFrame, gameRenderer, SDL_FLIP_NONE);

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

	//Update the frame based on the duration
	Uint32 currentTime = SDL_GetTicks();
	if (currentTime - lastFrame >= frameDuration) {
		currentFrame = (currentFrame + 1) % frameCount;
		lastFrame = currentTime;
	}

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