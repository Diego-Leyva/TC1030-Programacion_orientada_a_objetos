// Diego Leyva Delgadillo A01745110
// David Sanchez Baez A01798202

#include "Paquete.h"
#include "Persona.h"

void Paquete::set_recipiente(Persona recipiente) {
    this->recipiente = recipiente;
}

void Paquete::set_direccion(std::string direccion) {
    this->direccion = direccion;
}

Persona Paquete::get_recipiente() {
    return this->recipiente;
}

std::string Paquete::get_direccion() { 
    return this->direccion;
}

Paquete::Paquete(Persona recipiente, std::string direccion) {
    set_recipiente(recipiente);
    set_direccion(direccion);
}
