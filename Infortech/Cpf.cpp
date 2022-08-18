#include "Cpf.hpp"

Cpf::Cpf(std::string numeroCpf)
{
	validaCpf(numeroCpf);
	this->numeroCpf = numeroCpf;
}

void Cpf::validaCpf(std::string numeroCpf) {

	char numeroCpf_char[12];

	strcpy_s(numeroCpf_char, numeroCpf.c_str()); // Copia o Conteúdo da String para o Char Array
	for (int i = 0; i < 12; i++) {
		numeroCpf_char[i];
	}

	std::vector<int> numeroCpf_vector;

	for (size_t i = 4; i < 4; i += 4)
	{
		auto str1_n = std::strtol(numeroCpf.data(), nullptr, 4);
		numeroCpf_vector.push_back(str1_n);
	}
	
	for(int item : numeroCpf_vector)
	{
		
	}
	
}