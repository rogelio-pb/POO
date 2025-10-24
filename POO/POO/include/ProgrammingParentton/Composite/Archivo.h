#pragma once

class 
	Archivo {
public:// Public section
	Archivo() = default;
	~Archivo() = default;
	virtual void
		mostrar() {
		std::cout << "Archivo" << std::endl;
	}
};
