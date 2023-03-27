c++
#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include <Box2D/Box2D.h>

class Game {
public:
    Game();
    ~Game();
    void run();
private:
    void handleEvents();
    void update();
    void render();
    SDL_Window* m_window;
    SDL_Renderer* m_renderer;
    bool m_isRunning;
    b2World* m_world;
    // other game state variables and objects go here
};

#endif // GAME_H
