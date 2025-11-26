#pragma once
#include"Prerequisites.h"

class AudioLoader
{
public:
	AudioLoader()=default;
	~AudioLoader()=default;

	bool
		loadSound(const std::string& filePath){
		std::cout << "Cargando archivo de sonido: " << filePath << std::endl;
		return true;
	}



};


