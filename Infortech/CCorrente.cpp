#include "./CCorrente.hpp"

CCorrente::CCorrente(int numeroAgencia, std::string numeroConta, Titular titular) : Conta(numeroAgencia, numeroConta, titular)
{
	
}

float CCorrente::taxaDeSaque() const
{
    return 0.05;
}
