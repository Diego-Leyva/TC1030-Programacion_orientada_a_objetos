#pragma once
#include "SistemaDeComunicacion.hpp"

class Telefono : public SistemaDeComunicacion {
    private:
        std::string numero;
    
    protected:
        Telefono(std::string);
    
    public:
        void set_numero(std::string);

        std::string get_numero();

        void llamar(std::string);
};