#pragma once
#include "Prerequisites.h"

class InterfazVieja {
public:
    InterfazVieja() = default;
    ~InterfazVieja() = default;
    virtual void metodoViejo() {
        std::cout << "metodo de la interfaz vieja" << std::endl;
    }
};