#pragma once
#include <string>

class SistemaDeComunicacion {
    private:
        bool comunicando {false};

    protected:
        std::string metodo;
        SistemaDeComunicacion(std::string);

    public:
        virtual bool comunicar() = 0;
        bool is_comunicando();
        void set_comunicando(bool);
};