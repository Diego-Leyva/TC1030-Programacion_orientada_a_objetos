#pragma once
#include "Serie.hpp"
#include "Pelicula.hpp"

class ServicioStreaming {
    private:
        std::string nombre;
        std::vector<Serie> series;
        std::vector<Pelicula> peliculas;
    
    public:
        std::string getNombre();
        std::vector<Serie> getSeries();
        std::vector<Pelicula> getPeliculas();
        std::string getMenuSeries();
        std::string getMenuPeliculas();

        void setNombre(std::string);
        void addSerie(Serie);
        void addPelicula(Pelicula);

        ServicioStreaming(std::string);
};