#include "Prerequisites.h"
#include "ProgrammingParentton/SingletonMultiThread/SingletonMultiThread.h"

SingletonMultiThread* SingletonMultiThread::instance = nullptr;
std::mutex SingletonMultiThread::mtx;

void
useSingletonMultiThread(int id) {//funcion que sera ejecutada por cada hilo
		SingletonMultiThread& singleton = SingletonMultiThread::getInstance();
		std::cout << "Thread " << id
		<< " using SingletonMultiThread instance at address: " << 
		&singleton << std::endl;
		std::cout << std::endl;
}


int main() {
	std::thread t1(useSingletonMultiThread, 1);
	std::thread t2(useSingletonMultiThread, 2);

	t1.join();//sirve para esperar a que un hilo termine su ejecucion
	t2.join();


	return 0;
}