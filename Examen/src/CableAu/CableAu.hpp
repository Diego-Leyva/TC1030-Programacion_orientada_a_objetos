// Diego Leyva Delgadillo A10745110
// Examen Practico de Programacion orientada a Objetos TC1030
// Profesor: Jorge Adolfo Ramirez Uresti

#pragma once
#include "Auriculares.hpp"

class CableAu : public Auriculares {
    private:
        float longCable;
        bool estereofonicos;
    
    public:
        CableAu(float, bool);
        std::string toString();
        virtual void bajarVolumen();
        virtual void subirVolumen();
};