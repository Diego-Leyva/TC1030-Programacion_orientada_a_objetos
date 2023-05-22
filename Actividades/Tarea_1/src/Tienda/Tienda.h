// Diego Leyva Delgadillo A01745110
// David Sanchez Baez A01798202

#pragma once
#include <iostream>
#include <string>

//Define la tienda departamental y el metodo de pago ademas del vendedor 

class Tienda { 
    private:
        std::string metodo_pago;
        std::string vendedor;
    
    public:
        std::string get_metodo_pago();
        std::string get_vendedor();

        void set_metodo_pago(std::string metodo_pago);
        void set_vendedor(std::string vendedor);

        Tienda(std::string metodo_pago, std::string vendedor);
        Tienda();
};