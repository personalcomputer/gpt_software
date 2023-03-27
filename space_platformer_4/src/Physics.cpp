#include "Physics.h"

Physics::Physics() : world(new b2World(gravity)) {}

Physics::~Physics() {
    delete world;
}

void Physics::updateWorld(float32 timeStep) {
    world->Step(timeStep, VELOCITY_ITERATIONS, POSITION_ITERATIONS);
}

b2Body* Physics::createStaticBox(const b2Vec2& position, const b2Vec2& size) {
    b2BodyDef bodyDef;
    bodyDef.type = b2_staticBody;
    bodyDef.position = position;

    b2PolygonShape shape;
    shape.SetAsBox(size.x, size.y);

    b2FixtureDef fixtureDef;
    fixtureDef.shape = &shape;

    b2Body* body = world->CreateBody(&bodyDef);
    body->CreateFixture(&fixtureDef);
    return body;
}

b2Body* Physics::createDynamicBox(const b2Vec2& position, const b2Vec2& size, float32 density) {
    b2BodyDef bodyDef;
    bodyDef.type = b2_dynamicBody;
    bodyDef.position = position;

    b2PolygonShape shape;
    shape.SetAsBox(size.x, size.y);

    b2FixtureDef fixtureDef;
    fixtureDef.shape = &shape;
    fixtureDef.density = density;

    b2Body* body = world->CreateBody(&bodyDef);
    body->CreateFixture(&fixtureDef);
    return body;
}

b2Joint* Physics::createRevoluteJoint(b2Body* bodyA, b2Body* bodyB, const b2Vec2& anchor) {
    b2RevoluteJointDef jointDef;
    jointDef.bodyA = bodyA;
    jointDef.bodyB = bodyB;
    jointDef.localAnchorA = jointDef.bodyA->GetLocalPoint(anchor);
    jointDef.localAnchorB = jointDef.bodyB->GetLocalPoint(anchor);
    return world->CreateJoint(&jointDef);
}
