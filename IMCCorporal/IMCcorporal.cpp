#include <iostream>
#include <string>
#include "IMCcorporal.h"
#include <limits>
#include <windows.h>
#include <cstdint>

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

	std::uint8_t pedirEdad()
	{
		std::uint8_t edad {validacionEdad()};

		return edad;
	}

	std::uint8_t validacionEdad()
	{
		std::int16_t edad{};
		
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
			else if (edad < 0) {
				
				std::cout << "Ingresa un numero valido!\n";
			}
			else if (edad > std::numeric_limits<std::int16_t>::max()) {

			}
			else
			{
				limpiezaBuffer();
							return static_cast<std::uint8_t>(edad);
			}
		}
	}

	void limpiezaBuffer()
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	double factorMasaCorporal(std::uint16_t peso, double altura)
	{
		double imc{static_cast<double>(peso)/(altura*altura)};
		double imc_redondeado = round(imc * 100.0) / 100.0;
		
		return imc_redondeado;
	}

	double validacionAltura()
	{
		double altura{};

		while (true)
		{
			std::cout << "Ingresa tu altura: ";
			std::cin >> altura;

			if (std::cin.fail())
			{
				std::cin.clear(); // Limpieza de las red flags
				limpiezaBuffer(); // Limpia el buffer
			}
			else if (std::cin.peek() != '\n' && std::cin.peek() != EOF)
			{
				std::cin.clear(); // Limpieza de las red flags
				limpiezaBuffer(); // Limpia el buffer
			}
			else if (altura < 0.0) 
			{
				std::cout << "La altura no puede ser negativa. Intenta de nuevo.\n";
			}
			else if (altura > std::numeric_limits<double>::max()) 
			{
				std::cout << "La altura excede el límite permitido. Intenta de nuevo.\n";
			}
			else
			{
				limpiezaBuffer();
				return altura;
			}
		}
	}

	std::uint16_t validacionPeso()
	{
		std::int16_t peso{};

		while (true)
		{
			std::cout << "Ingresa tu peso: ";
			std::cin >> peso;

			if (std::cin.fail())
			{
				std::cin.clear(); // Limpieza de las red flags
				limpiezaBuffer(); // Limpia el buffer
			}
			else if (std::cin.peek() != '\n' && std::cin.peek() != EOF)
			{
				std::cin.clear(); // Limpieza de las red flags
				limpiezaBuffer(); // Limpia el buffer
			}
			else if (peso < 0) 
			{
				std::cout << "El peso no puede ser negativo. Intenta de nuevo.\n";
			}
			else if (peso > std::numeric_limits<std::uint16_t>::max()) 
			{
				std::cout << "El peso excede el límite permitido. Intenta de nuevo.\n";
			}
			else
			{
				limpiezaBuffer();
				return static_cast<std::uint16_t>(peso);
			}
		}
	}
}