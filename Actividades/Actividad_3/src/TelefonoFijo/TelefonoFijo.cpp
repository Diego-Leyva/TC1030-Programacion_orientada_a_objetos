#include "TelefonoFijo.hpp"

TelefonoFijo::TelefonoFijo(int numero) : Telefono {"55 7216 0181"}, numLineas {numero} {}

bool TelefonoFijo::comunicar(){
    llamar("55 9999 3333");
    return true;
}