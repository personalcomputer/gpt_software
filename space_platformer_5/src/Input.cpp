#include "Input.h"

Input::Input() {
    lastKey = sf::Keyboard::Unknown;
    keyPressed = false;
}

Input::~Input() {}

void Input::update() {
    sf::Event event;
    while(Graphics().getRenderWindow().pollEvent(event)) {
        if(event.type == sf::Event::Closed) Graphics().getRenderWindow().close();
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        lastKey = sf::Keyboard::Space;
        keyPressed = true;
    } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        lastKey = sf::Keyboard::Up;
        keyPressed = true;
    } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        lastKey = sf::Keyboard::Down;
        keyPressed = true;
    } else {
        lastKey = sf::Keyboard::Unknown;
        keyPressed = false;
    }
}

bool Input::isKeyPressed(sf::Keyboard::Key key) {
    return (key == lastKey && keyPressed);
}
