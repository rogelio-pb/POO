#pragma once
#include"Prerequisites.h"

class
	SingletonMultiThread {
private:
	SingletonMultiThread() = default;
	~SingletonMultiThread() = default;
public:
	static SingletonMultiThread& getInstance() {
		std::lock_guard<std::mutex> lock(mtx);
		if (instance == nullptr) {
			instance = new SingletonMultiThread();
		}
		return *instance;
	}
private:
	static SingletonMultiThread* instance;
	static std::mutex mtx;
};
