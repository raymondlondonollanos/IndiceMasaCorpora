#include <iostream>
#include <string>
#include "IMCcorporal.h"
#include <limits>


namespace imc
{
	std::string pedirNombre()
	{
		std::string nombre;
		std::cout << "Ingresa tu nombre: ";
		std::cin >> nombre;

		return nombre;
	}

	std::string pedirApellido()
	{
		std::string apellido;
		std::cout << "Ingresa tu apellido: ";
		std::cin >> apellido;

		return apellido;
	}

	std::uint16_t pedirEdad()
	{
		std::uint16_t edad{ validacionEdad() };

		return edad;
	}

	std::uint16_t validacionEdad()
	{
		
		std::uint16_t edad{};
		

		while (true)
		{
			std::cout << "Ingresa tu edad: ";
			std::cin >> edad;

			if (std::cin.fail())
			{
				std::cin.clear();// limpeaza de las red flgas
				limpiezaBuffer(); // limpia el buffer

			}
			else if (std::cin.peek() != '\n' && std::cin.peek() != EOF)
			{
				std::cin.clear();// limpeaza de las red flgas
				limpiezaBuffer(); // limpia el buffer
			}
			else {
				limpiezaBuffer();
				return edad;
			}
		}
		

	

	}

	void limpiezaBuffer()
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}