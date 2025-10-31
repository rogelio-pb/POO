#pragma once
#include "Prerequisites.h"
#include "GameProgrammingParentton/Observer/Observer.h"

class SoundNotification : public Observer // Hereda de Observer para ser compatible
{
public:
    SoundNotification() = default;
    ~SoundNotification() = default;

    void onNotify(int _value) override {
        std::cout << "SoundNotification: Notificación de sonido para el mensaje " << _value << std::endl;
    }
};