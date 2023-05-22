// Diego Leyva Delgadillo A01745110
// David Sanchez Baez A01798202

#pragma once
#include <iostream>
#include <string>
#include "Articulo.h"

//Se define una herencia de la classe Articulo para dar un objeto de compra (darle un nombre o una froma)

class Tv : public Articulo {
    private:
        std::string marca;
        float pulgadas;
    
    public:
        std::string get_marca();
        float get_pulgadas();

        void set_marca(std::string marca);
        void set_pulgadas(float pulgadas);

        Tv(std::string marca, float pulgadas, std::string nombre, std::string tipo, float precio);
};