// Diego Leyva Delgadillo A10745110
// Examen Practico de Programacion orientada a Objetos TC1030
// Profesor: Jorge Adolfo Ramirez Uresti

#pragma once
#include <string>

class Auriculares {
    protected:
        int volumen {10};

        Auriculares();
        Auriculares(int);
    
    public:
        virtual void bajarVolumen() = 0;
        virtual void subirVolumen() = 0;

        std::string toString();
};