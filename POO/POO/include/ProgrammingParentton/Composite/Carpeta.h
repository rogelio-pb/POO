#pragma once
class
	Carpeta {
public:// Public section
	Carpeta() = default;
	~Carpeta() = default;

	virtual void mostrar() {
		std::cout << "Archivo" << std::endl;
	}
};
