#include "Cpf.hpp"

Cpf::Cpf(std::string numeroCpf)
{
	if (!validaCpf(numeroCpf)) {
		std::cout << "CPF inválido\n";
	}
	else
	{
		this->numeroCpf = numeroCpf;
	}
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
		
	verificaDigito(resultSoma1);

	int resultSoma2 = 0;
	j = 12;
	for (int i = 0; i < 10; i++)
	{
		j--;
		resultSoma2 += numeroCpf_vector[i] * j;
	}

	verificaDigito(resultSoma2);
	if (digito[0] == numeroCpf_vector[9] && digito[1] == numeroCpf_vector[10]) {
		return true;
	}
	return false;
}
std::vector<int> Cpf::verificaDigito(int resultadoSoma) {

	int dig = resultadoSoma % 11;
	if (dig == 0 || dig == 1) {
		digito.push_back(dig);
	}
	else if (dig > 1 && dig <= 10) {
		dig = 11 - dig;
		digito.push_back(dig); 
	}
	return digito;
}