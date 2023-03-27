#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

#include "Level.h"
#include "Graphics.h"
#include "Audio.h"

class Game {
public:
    Game();
    void run();

private:
    void handleInput();
    void update();
    void render();

    sf::RenderWindow window;
    Level level;
    Graphics graphics;
    Audio audio;

    bool running;
};

#endif // GAME_H
