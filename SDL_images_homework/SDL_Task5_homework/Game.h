#ifndef GAME_H
#define GAME_H
#include <SDL.h>

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

    //SDL texture
    SDL_Texture* texture;
    //SDL rectangles for source and destination
    SDL_Rect sourceRectangle;
    SDL_Rect destinationRectangle;

    //A variable to store the current quadrant
    int currentQuadrant = 0;

};

#endif