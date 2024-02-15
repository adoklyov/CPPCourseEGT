#include <SDL.h>
#include <SDL_image.h>
#include <string>
#include <map>

using namespace std;

class TextureManager {

public:

	//Loads a texture from a file
	bool loadTexture(const char* fileName, string id, SDL_Renderer* ren);

	//Draws a texture to the screen
	void drawTexture(string id,
		int x, int y,
		int width, int height,
		SDL_Renderer* ren,
		SDL_RendererFlip flip = SDL_FLIP_NONE);

	//Draws a single frame from a texture
	void drawOneFrameFromTexture(string id,
		int x, int y,
		int width, int height,
		int currentRow, int currentFrame,
		SDL_Renderer* ren,
		SDL_RendererFlip flip = SDL_FLIP_NONE);

	//Instance of the texture manager
	static TextureManager* Instance();

private:

	//Map of textures
	map<string, SDL_Texture*> textureMap;
	//Constructor
	TextureManager() {}
	//Instance of the texture manager
	static TextureManager* instance;

};