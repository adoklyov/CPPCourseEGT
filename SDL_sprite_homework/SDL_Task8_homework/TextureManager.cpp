#include "TextureManager.h"
#include <iostream>

using namespace std;

//Loads a texture from a file
bool TextureManager::loadTexture(const char* fileName, string id, SDL_Renderer* ren) {

	SDL_Surface* tempSurface = IMG_Load(fileName);

	if (tempSurface == nullptr) {
		return false;
	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tempSurface);
	SDL_FreeSurface(tempSurface);

	if (tex != 0) {
		textureMap[id] = tex;
		return true;
	}

	return false;

}


//Draws a texture to the screen
void TextureManager::drawTexture(string id,
	int x, int y,
	int width, int height,
	SDL_Renderer* ren,
	SDL_RendererFlip flip) {

	SDL_Rect srcRect;
	SDL_Rect destRect;
	srcRect.x = srcRect.y = 0;
	srcRect.w = destRect.w = width;
	srcRect.h = destRect.h = height;
	destRect.x = x;
	destRect.y = y;

	SDL_RenderCopyEx(ren, textureMap[id], &srcRect, &destRect, 0, 0, flip);
}


//Draws a single frame from a texture
void TextureManager::drawOneFrameFromTexture(string id, int x, int y, int width, int height, int currentRow, int currentFrame, SDL_Renderer* ren, SDL_RendererFlip flip) {
	SDL_Rect srcRect;
	SDL_Rect destRect;
	srcRect.x = width * currentFrame;
	srcRect.y = height * currentRow;
	srcRect.w = width;
	srcRect.h = height;
	destRect.x = x;
	destRect.y = y;
	destRect.w = width;
	destRect.h = height;

	SDL_RenderCopyEx(ren, textureMap[id], &srcRect, &destRect, 0, nullptr, flip);
}

//Instance of the texture manager
TextureManager* TextureManager::Instance() {
	if (instance == 0) {
		instance = new TextureManager();
		return instance;
	}
	return instance;
}

TextureManager* TextureManager::instance = 0;