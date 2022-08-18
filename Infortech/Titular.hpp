#pragma once
#include "Cpf.hpp"
#include <string>

class Titular : public Cpf 
{
public:
	Titular(std::string nomeCompleto, std::string nomeMae, std::string endereco, Cpf cpf);

protected:
	std:: string nomeCompleto;
	std::string nomeMae;
	std::string endereco;
	
};

