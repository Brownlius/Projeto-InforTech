#pragma once
#include "Cpf.hpp"
#include <string>

class Titular : public Cpf 
{
public:
	Titular(std::string nomeCompleto, std::string nomeMae, std::string endereco, Cpf cpf);
	void mostraDadosTitular();
protected:
	std:: string nomeCompleto;
	std::string nomeMae;
	std::string endereco;
public:
	std::string getNomeCompleto() { return nomeCompleto; }
	std::string getNomeMae() { return nomeMae; }
	std::string getEndereco() { return endereco; }
};

