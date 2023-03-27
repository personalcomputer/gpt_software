#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>

#include "GameObject.h"

class Graphics {
public:
    Graphics(b2World& world);
    void update();
    void render(sf::RenderWindow& window);
    void addGameObject(GameObject* gameObj);

private:
    std::vector<GameObject*> gameObjects;
};

#endif // GRAPHICS_H
