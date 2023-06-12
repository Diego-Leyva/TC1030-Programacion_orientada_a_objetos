#include "Pelicula.hpp"

Pelicula::Pelicula(std::string nombre, std::string genero, int duracion, float calificacion, std::string ID) {
    setNombre(nombre);
    setGenero(genero);
    setDuracion(duracion);
    setCalificacion(calificacion);
    setId(ID);
}

std::string Pelicula::getNombre() {
    return nombre;
}
std::string Pelicula::getGenero() {
    return genero;
}
int Pelicula::getDuracion() {
    return duracion;
}
std::string Pelicula::getId() {
    return ID;
}
std::string Pelicula::reproducir() {
    return "";
}
float Pelicula::getCalificacion() {
    return calificacion;
}


void Pelicula::setNombre(std::string nombre) {
    this->nombre = nombre;
}
void Pelicula::setGenero(std::string genero) {
    this->genero = genero;
}
void Pelicula::setDuracion(int duracion) {
    this->duracion = duracion;
}
void Pelicula::setCalificacion(float calificacion) {
    this->calificacion = calificacion;
}
void Pelicula::setId(std::string ID) {
    this->ID = ID;
}