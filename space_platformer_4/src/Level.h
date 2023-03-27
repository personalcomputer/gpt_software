#ifndef LEVEL_H
#define LEVEL_H

#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>

class Level {
public:
    Level(b2World& world);
    void loadFromFile(const std::string& filename);
    void update();
    void render(sf::RenderWindow& window);

private:
    b2World& world;
    std::vector<sf::RectangleShape> shapes;
};

#endif // LEVEL_H
