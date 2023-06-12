#include "Serie.hpp"

Serie::Serie(std::string nombre, std::string genero, int temporadas, std::vector<Episodio> episodios) {
    setNombre(nombre);
    setGenero(genero);
    setTemporadas(temporadas);
    addTemporada(episodios);
}

std::vector<Episodio> Serie::getEpisodiosTemporada(int temporada) {
    std::vector<Episodio> episodiosTemporada;
    for(auto item : episodios) {
        if(item.getTemporada() == temporada) {
            episodiosTemporada.push_back(item);
        }
    }

    return episodiosTemporada;
}

std::vector<Episodio> Serie::getEpisodios() {
    return episodios;
}

std::string Serie::getNombre() {
    return nombre;
}

std::string Serie::getGenero() {
    return genero;
}

float Serie::getCalificacion() {

    float calificacion = 0;

    for(auto item : episodios) {
        calificacion = calificacion + item.getCalificacion();
    }

    return calificacion/episodios.size();
}

int Serie::getTemporadas() {
    return temporadas;
}

void Serie::addEpisodio(Episodio episodio) {
    episodios.push_back(episodio);
}

void Serie::addTemporada(std::vector<Episodio> temporada) {
    for(auto item : temporada) {
        addEpisodio(item);
    }
}

void Serie::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Serie::setGenero(std::string genero) {
    this->genero = genero;
}

void Serie::setTemporadas(int numero) {
    temporadas = numero;
}