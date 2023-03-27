#include "Game.h"

Game::Game() : window(sf::VideoMode(800, 600), "My Game"), running(true) {}

void Game::run() {
    while (running) {
        handleInput();
        update();
        render();
    }
}

void Game::handleInput() {
    // Handle player input
}

void Game::update() {
    // Update game logic
}

void Game::render() {
    // Clear screen
    window.clear();

    // Render game graphics
    graphics.render(window);

    // Display rendered graphics
    window.display();
}
