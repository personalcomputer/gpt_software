#include "GameObject.h"

GameObject::GameObject() {}

GameObject::~GameObject() {}

void GameObject::load(std::string filename) {
    texture.loadFromFile(filename);
    sprite.setTexture(texture);
}

void GameObject::setPosition(float x, float y) {
    sprite.setPosition(x,y);
    physics.setPosition(x,y);
}

void GameObject::setVelocity(float vx, float vy) {
    physics.setVelocity(vx,vy);
}

void GameObject::setAcceleration(float ax, float ay) {
    physics.setAcceleration(ax,ay);
}

void GameObject::update(float deltaTime) {
    physics.update(deltaTime);
    sprite.setPosition(physics.getPosition());
}

void GameObject::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}

sf::Vector2f GameObject::getPosition() {
    return sprite.getPosition();
}

sf::Vector2f GameObject::getVelocity() {
    return physics.getVelocity();
}

sf::Vector2f GameObject::getAcceleration() {
    return physics.getAcceleration();
}

sf::Vector2f GameObject::getSize() {
    return sf::Vector2f(sprite.getGlobalBounds().width, sprite.getGlobalBounds().height);
}

bool GameObject::isCollidingWith(GameObject otherObject) {
    sf::FloatRect thisBounds = sprite.getGlobalBounds();
    sf::FloatRect otherBounds = otherObject.sprite.getGlobalBounds();

    return thisBounds.intersects(otherBounds);
}
