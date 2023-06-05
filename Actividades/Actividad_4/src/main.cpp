#include "Cafetera.hpp"
#include <iostream>

int main() {
	Cafetera c1("Expreso", 3, 6.2);
	Cafetera c2("Nescafe", 1, 2.4);
	Cafetera c3("Profesional", 20, 10.5);

	std::cout << c1.toString() << std::endl;
	std::cout << c2.toString() << std::endl;
	std::cout << c3.toString() << std::endl;

	Cafetera total = c1 + c2;

	std::cout << total.toString() << std::endl;

	return 0;
}
