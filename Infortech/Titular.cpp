#include "Titular.hpp"

Titular::Titular(std::string nomeCompleto, std::string nomeMae, std::string endereco, Cpf cpf) : nomeCompleto(nomeCompleto),nomeMae(nomeMae),endereco(endereco), Cpf(cpf)
{

}

void Titular::mostraDadosTitular() {
	std::cout << "\nTitular �: " << getNomeCompleto() << std::endl;
	std::cout << "\nNome da m�e: " << getNomeMae() << std::endl;
	std::cout << "\nCPF do titular: " << GetnumeroCpf() << std::endl;
	std::cout << "\nEndere�o Completo: " << getEndereco() << std::endl;
}