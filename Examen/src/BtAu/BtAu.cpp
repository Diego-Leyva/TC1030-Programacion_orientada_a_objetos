// Diego Leyva Delgadillo A10745110
// Examen Practico de Programacion orientada a Objetos TC1030
// Profesor: Jorge Adolfo Ramirez Uresti

#include "BtAu.hpp"
#include <iostream>

BtAu::BtAu(int r) : Auriculares (50), filtro {false}, rango {r} {}

std::string BtAu::toString() {
    std::string s = isFiltro() ? "1" : "0";

    return "BtAu(" + Auriculares::toString() + "," + std::to_string(rango) + "," + s + ")";
}

bool BtAu::isFiltro() {
    return filtro;
}

void BtAu::setFiltro(bool v) {
    filtro = v;
}

void BtAu::bajarVolumen() {
    std::cout << "Bajando el volumen de tus auriculares Bluetooth" << std::endl;
    volumen = volumen - 5;
}

void BtAu::subirVolumen() {
    std::cout << "Subiendo el volumen de tus auriculares Bluetooth" << std::endl;
    volumen = volumen + 5;
}