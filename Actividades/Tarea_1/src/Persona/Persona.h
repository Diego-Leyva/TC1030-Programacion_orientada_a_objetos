// Diego Leyva Delgadillo A01745110
// David Sanchez Baez A01798202

#pragma once
#include <iostream>
#include <string>

//Define a la persona que desea realizar la compra y almacena los datos de la misma.

class Persona {
    private:
        std::string nombre;
        std::string telefono;
        std::string nacimiento;
    
    public:
        std::string get_nombre();
        std::string get_telefono();
        std::string get_nacimiento();

        void set_nombre(std::string nombre);
        void set_telefono(std::string telefono);
        void set_nacimiento(std::string nacimiento);

        Persona(std::string nombre, std::string telefono, std::string nacimiento);
        Persona();
};