// Diego Leyva Delgadillo A01745110
// David Sanchez Baez A01798202

#include "Articulo.h"

void Articulo::set_tipo(std::string tipo) {
    this->tipo = tipo;
}

void Articulo::set_nombre(std::string nombre) {
    this->nombre = nombre;
}

void Articulo::set_precio(float precio) {
    this->precio = precio;
}

std::string Articulo::get_tipo() {
    return this->tipo;
}

std::string Articulo::get_nombre() {
    return this->nombre;
}

float Articulo::get_precio() {
    return this->precio;
}

Articulo::Articulo(std::string tipo, std::string nombre, float precio) { 
    set_tipo(tipo);
    set_nombre(nombre);
    set_precio(precio);
}

Articulo::Articulo() {}