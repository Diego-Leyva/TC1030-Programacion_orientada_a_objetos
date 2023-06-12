#include "ServicioStreaming.hpp"

ServicioStreaming::ServicioStreaming(std::string name) {
    setNombre(name);
}

std::string ServicioStreaming::getNombre() {
    return nombre;
}
std::vector<Serie> ServicioStreaming::getSeries() {
    return series;
}
std::vector<Pelicula> ServicioStreaming::getPeliculas() {
    return peliculas;
}
std::string ServicioStreaming::getMenuSeries() {
    std::string line = "Nombre  |  Calificacion  |  Genero\n";
    for(auto item : series) {
        std::vector<Episodio> episodios = item.getEpisodios();
        line = line + item.getNombre() + "  |  " + std::to_string(item.getCalificacion()) + "  |  " + item.getGenero() + "\n";
        for(auto ep : episodios) {
            line = line + " -- " + ep.getNombre() + "  |  " + std::to_string(ep.getCalificacion()) + "  |   " + item.getGenero() + "\n";
        }
    }

    return line;
}

std::string ServicioStreaming::getMenuPeliculas() {
    std::string line = "Nombre  |  Calificacion  |  Genero\n";
    for(auto item : peliculas) {
        line = line + item.getNombre() + "  |  " + std::to_string(item.getCalificacion()) + "  |  " + item.getGenero() + "\n";
    }

    return line;
}

void ServicioStreaming::setNombre(std::string nombre) {
    this->nombre = nombre;
}
void ServicioStreaming::addSerie(Serie serie) {
    series.push_back(serie);
}
void ServicioStreaming::addPelicula(Pelicula pelicula) {
    peliculas.push_back(pelicula);
}