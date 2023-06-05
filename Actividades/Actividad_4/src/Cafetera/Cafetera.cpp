#include "Cafetera.hpp"

Cafetera::Cafetera(std::string nombre, float capacidad, float tazasMin) : nombre {nombre}, capacidad {capacidad}, tazasMin {tazasMin} {}

std::string Cafetera::toString() {
	return "Cafetera(" + std::to_string(capacidad) + "," + std::to_string(tazasMin) + "," + nombre + ")";
}

int operator +(Cafetera &c1, Cafetera &c2) {
	return c1.tazasMin + c2.tazasMin;
}
