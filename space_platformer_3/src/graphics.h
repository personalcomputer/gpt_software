c++
#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL.h>
#include <SDL_image.h>
#include <string>

class Graphics {
public:
    Graphics();
    ~Graphics();
    SDL_Texture* loadImage(std::string filepath);
    void render(SDL_Texture* texture, SDL_Rect* srcRect, SDL_Rect* destRect);
    void clear();
    void present();
private:
    SDL_Window* m_window;
    SDL_Renderer* m_renderer;
};

#endif // GRAPHICS_H
