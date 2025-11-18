#pragma once

class
	Command {
public:
	Command() = default;
	 ~Command() = default;

	 virtual void ejecutable() = 0;
	 virtual void deshacer() = 0;
};
	
