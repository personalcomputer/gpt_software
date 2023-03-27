#ifndef PHYSICS_H
#define PHYSICS_H

#include <Box2D/Box2D.h>

class Physics {
public:
    Physics();
    ~Physics();

    void updateWorld(float32 timeStep);

    b2Body* createStaticBox(const b2Vec2& position, const b2Vec2& size);
    b2Body* createDynamicBox(const b2Vec2& position, const b2Vec2& size, float32 density = 1.0f);
    b2Joint* createRevoluteJoint(b2Body* bodyA, b2Body* bodyB, const b2Vec2& anchor);

    static const int32_t VELOCITY_ITERATIONS = 6;
    static const int32_t POSITION_ITERATIONS = 2;

private:
    b2World* world;
    b2Vec2 gravity{0.0f, 9.81f};
};

#endif // PHYSICS_H
