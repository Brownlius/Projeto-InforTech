#pragma once
#include "Cpf.hpp"
#include <string>

class Titular : public Cpf 
{
public:
	Titular(std::string nomeCompleto, Cpf cpf);

private:
	std:: string nomeCompleto;
};

