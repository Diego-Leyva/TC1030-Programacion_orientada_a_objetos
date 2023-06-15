// Diego Leyva Delgadillo A10745110
// Examen Practico de Programacion orientada a Objetos TC1030
// Profesor: Jorge Adolfo Ramirez Uresti

#include "Auriculares.hpp"

Auriculares::Auriculares(int v) : volumen {v} {}

std::string Auriculares::toString() {
    return "Auriculares(" + std::to_string(volumen) + ")";
}