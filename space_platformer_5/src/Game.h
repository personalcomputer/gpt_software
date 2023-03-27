#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Level.h"

class Game {
public:
    Game();
    void run();
private:
    void update(float deltaTime);
    void draw();
    sf::RenderWindow window;
    Level currentLevel;
};

#endif /* GAME_H */
