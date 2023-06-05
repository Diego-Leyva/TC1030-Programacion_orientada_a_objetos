#pragma once
#include <string>

class Cafetera {
	private:
		float capacidad {3.0};
		float tazasMin {1.5};
		std::string nombre {"Indefinido"};

	public:
		Cafetera(std::string, float, float);
		std::string toString();
		friend int operator +(Cafetera &c1, Cafetera&c2);
};
