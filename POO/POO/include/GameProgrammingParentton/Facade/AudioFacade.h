#pragma once
#include "Prerequisites.h"
#include "GameProgrammingParentton/Facade/AudioLoader.h"
#include "GameProgrammingParentton/Facade/AudioMixer.h"
#include "GameProgrammingParentton/Facade/AudioEffectsProcesador.h"

class AudioFacade
{
public:
	AudioFacade()=default;
	~AudioFacade()=default;

	void
		initialize() {
		std::cout << "Inicializando sistema de audio..." << std::endl;
		mixer.setMasterVolume(0.8f);
		effects.setReverbEffect(true);
	}
	void
		playBackgroundMusic(const std::string& musicPath) {
		std::cout << "Reproduciendo música de fondo: " << musicPath << std::endl;
		if (loader.loadSound(musicPath)) {
			const int musicChannelId = 0;
			mixer.playChanel(musicChannelId);
		}
		else {
			std::cout << "Error al cargar la música de fondo."
				<< musicPath << std::endl;
		}
	}

	void
		playSfx(const std::string& sfxPath) {
		std::cout << "Reproduciendo efecto de sonido: " << sfxPath << std::endl;
		if (loader.loadSound(sfxPath)) {
			const int sfxChannelId = 1;
			mixer.playChanel(sfxChannelId);
		}
		else {
			std::cout << "Error al cargar el efecto de sonido."
				<< sfxPath << std::endl;
		}
	}

	void
		setMasterVolume(float volume) {
		mixer.setMasterVolume(volume);
	}
	void
		enableRaverb(bool enable) {
		effects.setReverbEffect(enable);
	}

private:
	AudioLoader loader;
	AudioMixer mixer;
	AudioEffectsProcesador effects;

};

