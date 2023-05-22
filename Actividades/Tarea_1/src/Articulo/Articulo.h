// Diego Leyva Delgadillo A01745110
// David Sanchez Baez A01798202

#pragma once
#include <iostream>
#include <string>

// Define las caracteristicas del Articulo que se vaya a comprar dentro de la tienda 

class Articulo {
    private:
        std::string tipo;
        std::string nombre;
        float precio;

    public:
        std::string get_tipo();
        std::string get_nombre();
        float get_precio();

        void set_tipo(std::string tipo);
        void set_nombre(std::string nombre);
        void set_precio(float precio);

        Articulo(std::string tipo, std::string nombre, float precio);
        Articulo();
};