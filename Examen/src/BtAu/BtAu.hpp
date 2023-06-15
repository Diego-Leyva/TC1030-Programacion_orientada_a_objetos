// Diego Leyva Delgadillo A10745110
// Examen Practico de Programacion orientada a Objetos TC1030
// Profesor: Jorge Adolfo Ramirez Uresti

#pragma once
#include "Auriculares.hpp"

class BtAu : public Auriculares {
    private:
        int rango;
        bool filtro;

    public:
        BtAu(int);
        bool isFiltro();
        void setFiltro(bool);
        std::string toString();
        virtual void bajarVolumen();
        virtual void subirVolumen();
};