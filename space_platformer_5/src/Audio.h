#ifndef AUDIO_H
#define AUDIO_H

#include <SFML/Audio.hpp>

class Audio {
public:
    Audio();
    virtual ~Audio();
    void playMusic(std::string filename);
    void playSound(std::string filename);
private:
    sf::Music backgroundMusic;
    sf::SoundBuffer soundBuffer;
    sf::Sound sound;
};

#endif /* AUDIO_H */
