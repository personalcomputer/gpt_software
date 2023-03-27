#include "Graphics.h"

Graphics::Graphics() : renderWindow(sf::VideoMode(800, 600), "Space Platformer") {}

Graphics::~Graphics() {}

void Graphics::clear() {
    renderWindow.clear();
}

void Graphics::draw(sf::Sprite& sprite) {
    renderWindow.draw(sprite);
}

void Graphics::draw(sf::Text& text) {
    renderWindow.draw(text);
}

void Graphics::display() {
    renderWindow.display();
}

bool Graphics::isOpen() {
    return renderWindow.isOpen();
}

sf::RenderWindow& Graphics::getRenderWindow() {
    return renderWindow;
}
