#include "Prerequisites.h"


std::mutex mtx; // Mutex para sincronizacion
int global_Counter = 0; // Contador global

void thread(int id) {
	for(unsigned int i = 0; i < 5; ++i) {
		mtx.lock(); // Bloquear el mutex antes de acceder al contador global
		std::cout << "Hilo " << id << " is runing: "<< std::endl;
		mtx.unlock(); // Desbloquear el mutex despues de acceder al contador global
	}
}
void threadCount(int id) {
	for (unsigned int i = 0; i < 1000; ++i) {
		mtx.lock(); // Bloquear el mutex antes de acceder al contador global
		global_Counter++;
		mtx.unlock(); // Desbloquear el mutex despues de acceder al contador global
	}
}

void threadName(int id, std::string name) {
	for (unsigned int i = 0; i < 5; i++) {
		mtx.lock(); // Bloquear el mutex antes de acceder al contador global
		std::cout << "Thread " << name << " is runing: " << std::endl;
		mtx.unlock(); // Desbloquear el mutex despues de acceder al contador global
	}
}


int main() {

	//Ejemplo de hilos con mutex
	std::thread t1(thread, 1);
	std::thread t2(threadName, 2, "Jose");
	std::thread t3(threadCount, 3);

	t1.join();
	t2.join();
	t3.join();

	std::cout << "Global Counter: " << global_Counter << std::endl;
	return 0;
}