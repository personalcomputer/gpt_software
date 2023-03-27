#include "Game.h"
#include "Graphics.h"
#include "Input.h"

Game::Game() : window(sf::VideoMode(800, 600), "Space Platformer") {
    currentLevel.load("assets/levels/level1.txt");
}

void Game::run() {
    Graphics graphics;
    Input input;
    sf::Clock clock;
    sf::Time timeSinceLastUpdate = sf::Time::Zero;
    sf::Time timePerFrame = sf::seconds(1.f/60.f);

    while(window.isOpen()) {
        input.update();

        timeSinceLastUpdate += clock.restart();
        while(timeSinceLastUpdate > timePerFrame) {
            timeSinceLastUpdate -= timePerFrame;

            // Game logic updates
            update(timePerFrame.asSeconds());
        }

        window.clear();

        // Game rendering
        draw();

        window.display();
    }
}

void Game::update(float deltaTime) {
    // Update the game objects in the level
    currentLevel.update(deltaTime);
}

void Game::draw() {
    // Draw the background
    window.draw(currentLevel);

    // Draw the game objects in the level
    currentLevel.draw(window);
}

