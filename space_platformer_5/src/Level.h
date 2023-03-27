#ifndef LEVEL_H
#define LEVEL_H

#include <vector>
#include <string>
#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Level {
public:
    Level();
    ~Level();
    void load(std::string filename);
    void update(float deltaTime);
    void draw(sf::RenderWindow& window);
private:
    std::vector<GameObject> gameObjects;
    sf::Texture backgroundTexture;
    sf::Sprite backgroundSprite;
};

#endif /* LEVEL_H */
