#include "SistemaDeComunicacion.hpp"

SistemaDeComunicacion::SistemaDeComunicacion(std::string metodo) : metodo {metodo} {}

bool SistemaDeComunicacion::is_comunicando() { return comunicando; }

void SistemaDeComunicacion::set_comunicando(bool state) { comunicando = state; }