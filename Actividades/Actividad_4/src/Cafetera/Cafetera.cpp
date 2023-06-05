#include "Cafetera.hpp"

Cafetera::Cafetera(std::string nombre, float capacidad, float tazasMin) : nombre {nombre}, capacidad {capacidad}, tazasMin {tazasMin} {}

std::string Cafetera::toString() {
	return "Cafetera(" + std::to_string(capacidad) + "," + std::to_string(tazasMin) + "," + nombre + ")";
}

Cafetera operator +(Cafetera &c1, Cafetera &c2) {
	Cafetera c("Profesional", c1.capacidad + c2.capacidad, c1.tazasMin + c2.tazasMin);
	return c;
}

float operator +(float num, Cafetera &c) {
	return num + c.tazasMin;
}