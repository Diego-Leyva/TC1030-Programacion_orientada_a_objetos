#pragma once

#include "Telefono.hpp"

class TelefonoFijo : public Telefono {
    private:
        int numLineas {1};

    public:
        TelefonoFijo(int);
        bool comunicar();
};