#pragma once
#ifndef IMC_H
#define IMC_H
#include <string>

namespace imc
{
	
	std::string pedirNombre();

	std::string pedirApellido();

	std::uint8_t pedirEdad();

	std::uint8_t validacionEdad();

	void limpiezaBuffer();

	double factorMasaCorporal(std::uint16_t peso, double altura);

	double validacionAltura();

	std::uint16_t validacionPeso();

};

#endif