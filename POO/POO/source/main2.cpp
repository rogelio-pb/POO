#include "Prerequisites.h"
#include "GameProgrammingParentton/Facade/AudioFacade.h"

int main() {
	AudioFacade audio;

	audio.initialize();
	audio.playBackgroundMusic("assets/music/background.mp3");
	audio.playSfx("assets/sfx/jump.wav");
	audio.setMasterVolume(0.5f);
	audio.enableRaverb(false);

	return 0;
}