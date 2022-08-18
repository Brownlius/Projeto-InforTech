#include "./CPoupanca.hpp"

CPoupanca::CPoupanca(int numeroAgencia, std::string numeroConta, Titular titular) : Conta(numeroAgencia, numeroConta, titular)
{
	std::cout << "Poupança criada";
}

