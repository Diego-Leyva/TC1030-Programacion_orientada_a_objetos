#include "Cafetera.hpp"
#include <iostream>

int main() {
	Cafetera c1("Expreso", 3, 6.2);
	Cafetera c2("Nescafe", 1, 2.4);

	std::cout << c1.toString() << std::endl;
	std::cout << c2.toString() << std::endl;

	float total = c1 + c2;

	std::cout << "Total combinado de tazas por minuto: " << total << std::endl;

	return 0;
}
