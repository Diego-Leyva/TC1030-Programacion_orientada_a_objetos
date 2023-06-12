#pragma once
#include "Video.hpp"

class Episodio : public Video {
    private:
        std::string nombre;
        float calificacion;
        int duracion;
        int temporada;
        std::string genero;
        std::string ID;
    
    public:
        std::string getNombre();
        float getCalificacion();
        int getDuracion();
        int getTemporada();
        std::string getGenero();
        std::string getId();
        std::string reproducir();

        void setNombre(std::string);
        void setDuracion(int);
        void setCalificacion(float);
        void setTemporada(int);
        void setGenero(std::string);
        void setId(std::string);

        Episodio(std::string, float, int, int, std::string, std::string);
};