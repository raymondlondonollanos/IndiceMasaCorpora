#pragma once
#ifndef IMC_H
#define IMC_H
#include <string>

namespace imc
{
	
	std::string pedirNombre();

	std::string pedirApellido();

	std::uint16_t pedirEdad();

	std::uint16_t validacionEdad();

	void limpiezaBuffer();

};

#endif