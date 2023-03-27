#ifndef INPUT_H
#define INPUT_H

#include <SFML/Graphics.hpp>

class Input {
public:
    void update(sf::RenderWindow& window);
    bool isKeyPressed(sf::Keyboard::Key key);

private:
    std::vector<sf::Keyboard::Key> pressedKeys;
};

#endif // INPUT_H
