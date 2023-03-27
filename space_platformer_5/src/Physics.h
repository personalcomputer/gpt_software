#ifndef PHYSICS_H
#define PHYSICS_H

#include <SFML/System.hpp>

class Physics {
public:
    Physics();
    virtual ~Physics();
    void setPosition(float x, float y);
    void setVelocity(float vx, float vy);
    void setAcceleration(float ax, float ay);
    void update(float deltaTime);
    sf::Vector2f getPosition();
    sf::Vector2f getVelocity();
    sf::Vector2f getAcceleration();
private:
    sf::Vector2f position;
    sf::Vector2f velocity;
    sf::Vector2f acceleration;
};

#endif /* PHYSICS_H */
