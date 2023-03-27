c++
#ifndef PHYSICS_H
#define PHYSICS_H

#include <Box2D/Box2D.h>

class Physics {
public:
    Physics(float gravityX, float gravityY);
    ~Physics();
    void update(float deltaTime);
    b2Body* createBox(float posX, float posY, float width, float height, bool isStatic);
    b2Body* createCircle(float posX, float posY, float radius, bool isStatic);
private:
    b2World* m_world;
};

#endif // PHYSICS_H
