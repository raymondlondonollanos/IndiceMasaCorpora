#include <iostream>
#include <string>
#include "IMCcorporal.h"
#include <cstdint>
#include <stdlib.h>

int main()
{
	std::string nombre{ imc::pedirNombre()};
	
	std::string apellido{ imc::pedirApellido()};
	
	std::uint8_t edad{ imc::pedirEdad() };

	double altura{ imc::validacionAltura() };

	std::uint16_t peso{ imc::validacionPeso() };

	double imc{imc::factorMasaCorporal( peso,altura)};

	std::cout << "Presiona ENTER para limpiar...";
	std::cin.get();

	imc::clear_screen();

	std::cout << "Mostrar informacion \n";
	std::cout << "Nombre: " << nombre <<'\n';
	std::cout << "Apellido: " << apellido << '\n';
	std::cout << "Edad: " << +edad << '\n';
	std::cout << "Altura ingresada: " << altura << '\n';
	std::cout << "Peso Ingresado: " << peso << '\n';
	std::cout << "Indice de masa corporal: " << imc << '\n';

	int imcInt{ static_cast<int>(imc * 10) };
	imc::escalaIMC(imcInt);


	//std::cout << +edad;

	return 0;
}