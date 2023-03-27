#include "Audio.h"

Audio::Audio() {}

Audio::~Audio() {}

void Audio::playMusic(std::string filename) {
    backgroundMusic.openFromFile(filename);
    backgroundMusic.setLoop(true);
    backgroundMusic.play();
}

void Audio::playSound(std::string filename) {
    soundBuffer.loadFromFile(filename);
    sound.setBuffer(soundBuffer);
    sound.play();
}
