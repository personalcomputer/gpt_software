#ifndef INPUT_H
#define INPUT_H

#include <SFML/Graphics.hpp>

class Input {
public:
    Input();
    virtual ~Input();
    void update();
    bool isKeyPressed(sf::Keyboard::Key key);
private:
    sf::Keyboard::Key lastKey;
    bool keyPressed;
};

#endif /* INPUT_H */
