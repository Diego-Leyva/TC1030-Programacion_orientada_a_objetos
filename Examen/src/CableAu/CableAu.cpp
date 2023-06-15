// Diego Leyva Delgadillo A10745110
// Examen Practico de Programacion orientada a Objetos TC1030
// Profesor: Jorge Adolfo Ramirez Uresti

#include "CableAu.hpp"
#include <iostream>

CableAu::CableAu(float l, bool s) : Auriculares (30), longCable {l}, estereofonicos {s} {}

std::string CableAu::toString() {
    std::string s = estereofonicos ? "1" : "0";

    return "CableAu(" + Auriculares::toString() + "," + std::to_string(longCable) + "," + s + ")";
}

void CableAu::bajarVolumen() {
    std::cout << "Bajando el volumen de tus auriculares alambricos" << std::endl;
    volumen = volumen - 5;
}

void CableAu::subirVolumen() {
    std::cout << "Subiendo el volumen de tus auriculares alambricos" << std::endl;
    volumen = volumen + 5;
}