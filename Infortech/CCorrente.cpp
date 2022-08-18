#include "./CCorrente.hpp"

CCorrente::CCorrente(int numeroAgencia, std::string numeroConta, Titular titular) : Conta(numeroAgencia, numeroConta, titular)
{
	std::cout << "Corrente criada";
}
