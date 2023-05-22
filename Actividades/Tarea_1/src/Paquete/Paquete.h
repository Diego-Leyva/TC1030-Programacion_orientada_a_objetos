// Diego Leyva Delgadillo A01745110
// David Sanchez Baez A01798202

#pragma once
#include "Persona.h"
#include <iostream>
#include <string>

// Define los datos de la direccion del envio y el receptor del mismo  

class Paquete {
    private:
        Persona recipiente;
        std::string direccion;
    
    public:
        Persona get_recipiente();
        std::string get_direccion();

        void set_recipiente(Persona recipiente);
        void set_direccion(std::string direccion);

        Paquete(Persona recipiente, std::string direccion);
};
