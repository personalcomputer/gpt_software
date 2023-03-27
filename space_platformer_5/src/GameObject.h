#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SFML/Graphics.hpp>
#include "Physics.h"

class GameObject {
public:
    GameObject();
    virtual ~GameObject();
    void load(std::string filename);
    void setPosition(float x, float y);
    void setVelocity(float vx, float vy);
    void setAcceleration(float ax, float ay);
    void update(float deltaTime);
    void draw(sf::RenderWindow& window);
    sf::Vector2f getPosition();
    sf::Vector2f getVelocity();
    sf::Vector2f getAcceleration();
    sf::Vector2f getSize();
    bool isCollidingWith(GameObject otherObject);
private:
    sf::Texture texture;
    sf::Sprite sprite;
    Physics physics;
};

#endif /* GAMEOBJECT_H */
