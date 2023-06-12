#pragma once
#include "Video.hpp"

class Pelicula {
    private:
        std::string nombre;
        std::string genero;
        int duracion;
        float calificacion;
        std::string ID;

    public:
        std::string getNombre();
        std::string getGenero();
        int getDuracion();
        std::string getId();
        std::string reproducir();
        float getCalificacion();


        void setNombre(std::string);
        void setGenero(std::string);
        void setDuracion(int);
        void setCalificacion(float);
        void setId(std::string);

        Pelicula(std::string, std::string, int, float, std::string);
};