#include "Cpf.hpp"

Cpf::Cpf(std::string numeroCpf)
{
	if (validaCpf(numeroCpf)) {
		std::cout << "Deu certo\n";
	}
	else {
		std::cout << "CPF inválido\n";
	}
	this->numeroCpf = numeroCpf;
}

bool Cpf::validaCpf(std::string numeroCpf) { 

	char numeroCpf_char[12];
	std::vector<int> numeroCpf_vector;

	strcpy_s(numeroCpf_char, numeroCpf.c_str());
	
	for (size_t i = 0; i < 11; i++)
	{
		int convertido = numeroCpf_char[i] - '0';
		numeroCpf_vector.push_back(convertido);
	}

	int resultSoma1 = 0;
	int j = 11;
	for (int i = 0; i < 9; i++)
	{
		j--;
		resultSoma1 += numeroCpf_vector[i] * j;
	}
		
	resultSoma1 * 10;
	int dig1 = resultSoma1 % 11;

	int resultSoma2 = 0;
	j = 12;
	for (int i = 0; i < 9; i++)
	{
		j--;
		resultSoma2 += numeroCpf_vector[i] * j;
		
	}
	resultSoma2 + (dig1 * 2) * 10;
	int dig2 = resultSoma2 % 11;

	if (dig1 == numeroCpf_vector[10] && dig2 == numeroCpf_vector[11]) {
		return true;
	}
	return false;
}