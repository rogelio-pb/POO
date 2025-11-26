#pragma once
#include"Prerequisites.h"

class AudioEffectsProcesador
{
public:
	AudioEffectsProcesador()=default;
	~AudioEffectsProcesador()=default;

	void setReverbEffect(bool intensity){
		std::cout << "Estableciendo efecto de reverberación con intensidad: " 
			<< intensity << std::endl;
	}

private:

};


