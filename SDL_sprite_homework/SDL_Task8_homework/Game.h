#ifndef GAME_H
#define GAME_H
#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"

using namespace std;

class Game {

public:

    //Constructor and destructor
    Game();
    ~Game();

    //Initialise the game window, renderer and game state
    bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
    //Render the game objects
    void render();
    //Update the game state and objects
    void update();
    //Processes events
    void handleEvents();
    //Cleans up the game
    void clean();
    //Checks if the game is running
    bool isRunning();

private:

    //SDL window and renderer
    SDL_Window* gameWindow = NULL;
    SDL_Renderer* gameRenderer = NULL;
    //Game running state
    bool running;
    //Frame attributes test
    int currentFrame = 0;
    const int frameWidth = 65;
    const int frameHeight = 65;
    const int spriteRow = 0;
    const int frameCount = 4;
    Uint32 frameDuration = 100;
    Uint32 lastFrame = 0;

};

#endif