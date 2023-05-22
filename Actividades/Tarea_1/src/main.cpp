// Diego Leyva Delgadillo A01745110
// David Sanchez Baez A01798202

#include "Articulo.h"
#include "Paquete.h"
#include "Persona.h"
#include "Tienda.h"
#include "Tv.h"

// Programa que junta todas las clases creadas y las coloca en un ticket 

int main() {
    // Creando a la persona 
    Persona comprador("David Sanchez", "+52 55 5555 5555", "24/05/2003");
   
    // Creando el objeto de TV
    Tv tele("Samsung", 27, "Samsung Oddysey CRG5 27", "Electronicos", 5999.99);

    // Detalles de la TV
    
    std::cout << "--------------------------" << std::endl;
    std::cout << "Detalles de la TV" << std::endl << "- ";
    std::cout << tele.get_marca() << std::endl << "- ";
    std::cout << tele.get_pulgadas() << std::endl << "- ";
    std::cout << tele.get_nombre() << std::endl  << "- ";
    std::cout << tele.get_tipo() << std::endl << "- ";
    std::cout << tele.get_precio() << std::endl;
    std::cout << "--------------------------" << std::endl;

    // Creando la tienda
    Tienda departamental("Tarjeta de Credito", "Diego Leyva");

    std::cout << "Metodo de pago: " << departamental.get_metodo_pago() << std::endl;
    std::cout << "Vendedor: " << departamental.get_vendedor() << std::endl;
    std::cout << "Comprador: " << comprador.get_nombre() << std::endl;
    std::cout << "Total de venta: MXN " << tele.get_precio() << std::endl;
    std::cout << "--------------------------" << std::endl;

    // Creando el paquete
    Paquete paquete(comprador, "Av Lago de Guadalupe KM 3.5, Margarita Maza de Juárez, 52926 Cd López Mateos, Méx.");

    std::cout << "Direccion de envio: " << paquete.get_direccion() << std::endl;
    std::cout << "Nombre del receptor: " << paquete.get_recipiente().get_nombre() << std::endl;
    std::cout << "Telefono del receptor: " << paquete.get_recipiente().get_telefono() << std::endl;
    std::cout << "--------------------------" << std::endl;
}