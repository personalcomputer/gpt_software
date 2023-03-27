#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SFML/Graphics.hpp>

class Graphics {
public:
    Graphics();
    virtual ~Graphics();
    void clear();
    void draw(sf::Sprite& sprite);
    void draw(sf::Text& text);
    void display();
    bool isOpen();
    sf::RenderWindow& getRenderWindow();
private:
    sf::RenderWindow renderWindow;
};

#endif /* GRAPHICS_H */
