#include "Physics.h"

Physics::Physics() {}

Physics::~Physics() {}

void Physics::setPosition(float x, float y) {
    position.x = x;
    position.y = y;
}

void Physics::setVelocity(float vx, float vy) {
    velocity.x = vx;
    velocity.y = vy;
}

void Physics::setAcceleration(float ax, float ay) {
    acceleration.x = ax;
    acceleration.y = ay;
}

void Physics::update(float deltaTime) {
    // Update velocity based on acceleration
    velocity.x += acceleration.x * deltaTime;
    velocity.y += acceleration.y * deltaTime;

    // Update position based on velocity
    position.x += velocity.x * deltaTime;
    position.y += velocity.y * deltaTime;
}

sf::Vector2f Physics::getPosition() {
    return position;
}

sf::Vector2f Physics::getVelocity() {
    return velocity;
}

sf::Vector2f Physics::getAcceleration() {
    return acceleration;
}
