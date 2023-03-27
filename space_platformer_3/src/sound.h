c++
#ifndef SOUND_H
#define SOUND_H

#include <SDL.h>
#include <SDL_mixer.h>
#include <map>
#include <string>

class Sound {
public:
    Sound();
    ~Sound();
    void playMusic(std::string filepath, int loops);
    void stopMusic();
    void playSoundEffect(std::string filepath, int loops);
private:
    std::map<std::string, Mix_Chunk*> m_soundEffectMap;
};

#endif // SOUND_H
