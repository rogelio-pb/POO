#pragma once
#include "Prerequisites.h"

class 
	AudioMixer
{
public:
	AudioMixer()=default;
	~AudioMixer()=default;

	void setMasterVolume(float volume){
		std::cout << "Estableciendo volumen maestro a: " << volume << std::endl;
	}
	void playChanel(int channelId){
		std::cout << "Reproduciendo canal de audio: " << channelId << std::endl;
	}
private:

};


