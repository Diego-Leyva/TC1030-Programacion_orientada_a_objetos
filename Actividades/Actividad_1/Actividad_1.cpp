// TC1030.302
// Diego Leyva Delgadillo A01745110
// David Sanchez Baez A01798202

#include <iostream>
#include <cstdbool>

class Electrodomestico {
    private:
        bool status;
    
    public:
        void encendido() {
            status = true;
        }

        void apagado() {
            status = false;
        }
};

class Microondas : public Electrodomestico {
    private:
        std::string capacidad;
        int minutos;
        int segundos;

    public:
        std::string get_capacidad() {
            return this->capacidad;
        }

        void Empezar(int minutos, int segundos) {
            this->minutos = minutos;
            this->segundos = segundos;
            std::cout << "El microondas calentara por " << minutos << ":" << segundos << std::endl;
        }

        void Detener() {
            this->minutos = 0;
            this->segundos = 0;
            apagado();
            std::cout << "El microondas se apaga" << std::endl;
        }

        Microondas(int minutos, int segundos, std::string capacidad) {
            this->capacidad = capacidad;
            Empezar(minutos, segundos);
            Detener();
        }

        Microondas() {
            Empezar(0, 30);
            Detener();
            this->capacidad = "default";
        }

};

int main() {

    Microondas micro1;

    std::cout << "Capacidad: " << micro1.get_capacidad() << std::endl;

    Microondas micro2(1, 30, "Small");

    std::cout << "Capacidad: " << micro2.get_capacidad() << std::endl;

    return 0;
}