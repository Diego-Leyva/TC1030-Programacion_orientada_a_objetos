// Diego Leyva Delgadillo A01745110
// David Sanchez Baez A01798202

#include "Persona.h"

void Persona::set_nombre(std::string nombre) { 
    this->nombre = nombre;
}

void Persona::set_telefono(std::string telefono) { 
    this->telefono = telefono;
}

void Persona::set_nacimiento(std::string nacimiento) { 
    this->nacimiento = nacimiento;
}

std::string Persona::get_nombre() {
    return this->nombre;
}

std::string Persona::get_telefono() {
    return this->telefono;
}

std::string Persona::get_nacimiento() {
    return this->nacimiento;
}

Persona::Persona(std::string nombre, std::string telefono, std::string nacimiento) {
    set_nombre(nombre);
    set_telefono(telefono);
    set_nacimiento(nacimiento);
}

Persona::Persona() {}
