#include "Episodio.hpp"

Episodio::Episodio(std::string nombre, float calificacion, int duracion, int temporada, std::string genero, std::string ID) {
    setNombre(nombre);
    setCalificacion(calificacion);
    setDuracion(duracion);
    setTemporada(temporada);
    setGenero(genero);
    setId(ID);
}

std::string Episodio::getNombre() {
    return nombre;
}
float Episodio::getCalificacion() {
    return calificacion;
}
int Episodio::getDuracion() {
    return duracion;
}
int Episodio::getTemporada() {
    return temporada;
}
std::string Episodio::getGenero() {
    return genero;
}
std::string Episodio::getId() {
    return ID;
}
std::string Episodio::reproducir() {
    return "Reproduciendo " + nombre;
}

void Episodio::setNombre(std::string nombre) {
    this->nombre = nombre;
}
void Episodio::setDuracion(int duracion) {
    this->duracion = duracion;
}
void Episodio::setCalificacion(float calificacion) {
    this->calificacion = calificacion;
}
void Episodio::setTemporada(int temporada) {
    this->temporada = temporada;
}
void Episodio::setGenero(std::string genero) {
    this->genero = genero;
}
void Episodio::setId(std::string ID) {
    this->ID = ID;
}