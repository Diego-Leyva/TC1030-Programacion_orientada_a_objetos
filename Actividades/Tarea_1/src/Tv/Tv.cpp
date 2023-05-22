// Diego Leyva Delgadillo A01745110
// David Sanchez Baez A01798202

#include "Tv.h"

std::string Tv::get_marca() {
    return this->marca;
}

float Tv::get_pulgadas() {
    return this->pulgadas;
}

void Tv::set_marca(std::string marca) {
    this->marca = marca;
}

void Tv::set_pulgadas(float pulgadas) {
    this->pulgadas = pulgadas;
}   

Tv::Tv(std::string marca, float pulgadas, std::string nombre, std::string tipo, float precio) {
    set_marca(marca);
    set_pulgadas(pulgadas);
    set_nombre(nombre);
    set_tipo(tipo);
    set_precio(precio);
}