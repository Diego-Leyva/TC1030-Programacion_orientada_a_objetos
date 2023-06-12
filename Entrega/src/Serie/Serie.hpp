#pragma once
#include "Episodio.hpp"

class Serie {
    private:
        std::vector<Episodio> episodios;
        std::string nombre;
        std::string genero;
        int temporadas;

    
    public:
        std::vector<Episodio> getEpisodiosTemporada(int);
        std::vector<Episodio> getEpisodios();
        std::string getNombre();
        std::string getGenero();
        float getCalificacion();
        int getTemporadas();

        void addTemporada(std::vector<Episodio>);
        void addEpisodio(Episodio);
        void setNombre(std::string);
        void setGenero(std::string);
        void setTemporadas(int);

        Serie(std::string, std::string, int, std::vector<Episodio>);
};