#pragma once
#include <string>
#include <vector>

class Video {
    public:
        virtual int getDuracion() = 0;
        virtual std::string reproducir() = 0;
        virtual std::string getId() = 0;
        virtual float getCalificacion() = 0;
        virtual std::string getNombre() = 0;
};