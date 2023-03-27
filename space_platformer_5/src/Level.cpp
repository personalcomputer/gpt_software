#include "Level.h"
#include <fstream>

Level::Level() {}

Level::~Level() {}

void Level::load(std::string filename) {
    std::ifstream inputFile(filename);
    std::string line;
    while(std::getline(inputFile,line)) {
        GameObject gameObject;
        gameObject.load(line);
        gameObjects.push_back(gameObject);
    }
    inputFile.close();

    backgroundTexture.loadFromFile("assets/textures/space.jpg");
    backgroundSprite.setTexture(backgroundTexture);
}

void Level::update(float deltaTime) {
    for(GameObject& gameObject : gameObjects) {
        gameObject.update(deltaTime);
    }
}

void Level::draw(sf::RenderWindow& window) {
    window.draw(backgroundSprite);
    for(GameObject& gameObject : gameObjects) {
        gameObject.draw(window);
    }
}
