#pragma once
#include <string>
#include <iostream>
#include <vector>

class Cpf 
{
public:

	Cpf(std::string numeroCpf);

	
	
	std::vector<int> digito;
	std::vector<int> verificaDigito(int resultadoSoma);
private:
	std::string numeroCpf;
	bool validaCpf(std::string numeroCpf);

};

