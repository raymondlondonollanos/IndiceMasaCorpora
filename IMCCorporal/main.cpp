#include <iostream>
#include <string>
#include "IMCcorporal.h"

int main()
{
	std::string nombre{ imc::pedirNombre()};
	
	std::string apellido{ imc::pedirApellido()};

	std::uint16_t edad{ imc::pedirEdad() };

	return 0;
}