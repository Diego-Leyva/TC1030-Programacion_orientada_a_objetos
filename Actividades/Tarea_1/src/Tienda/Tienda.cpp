// Diego Leyva Delgadillo A01745110
// David Sanchez Baez A01798202

#include "Tienda.h"

std::string Tienda::get_metodo_pago() {
    return this->metodo_pago;
}

std::string Tienda::get_vendedor() {
    return this->vendedor;
}

void Tienda::set_metodo_pago(std::string metodo_pago) {
    this->metodo_pago = metodo_pago;
}

void Tienda::set_vendedor(std::string vendedor) {
    this->vendedor = vendedor;
}

Tienda::Tienda(std::string metodo_pago, std::string vendedor) {
    set_metodo_pago(metodo_pago);
    set_vendedor(vendedor);
}

Tienda::Tienda() {}