#include "Telefono.hpp"

Telefono::Telefono(std::string numero) : SistemaDeComunicacion {"Telefonica"}, numero {numero} {}

void Telefono::set_numero(std::string numero) {
    this->numero = numero;
}

std::string Telefono::get_numero() {
    return numero;
}

void Telefono::llamar(std::string numero) {

}