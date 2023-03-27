#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>

class GameObject {
public:
    GameObject(b2World& world, const sf::Vector2f& position, const sf::Vector2f& size);
    void update();
    void render(sf::RenderWindow& window);

    void setLinearVelocity(const b2Vec2& velocity);
    void applyForce(const b2Vec2& force);

private:
    sf::RectangleShape shape;
    b2Body* body;
};

#endif // GAMEOBJECT_H
