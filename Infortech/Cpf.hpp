#pragma once
#include <string>
#include <iostream>
#include <vector>


class Cpf 
{
public:

	static int cpfValido;
	Cpf(std::string numeroCpf);
	~Cpf();
	std::vector<int> digito;
	std::vector<int> verificaDigito(int resultadoSoma);
	bool validaCpf(std::string numeroCpf);
	std::string GetnumeroCpf() { return numeroCpf; }
private:
	std::string numeroCpf;

};

