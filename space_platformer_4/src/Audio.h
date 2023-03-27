#ifndef AUDIO_H
#define AUDIO_H

#include <SFML/Audio.hpp>

class Audio {
public:
    void loadSounds();
    void playSound(const std::string& soundName);
    void playMusic(const std::string& musicName);
    void stopMusic();

private:
    std::unordered_map<std::string, sf::SoundBuffer> soundBuffers;
    sf::Music music;
};

#endif // AUDIO_H
