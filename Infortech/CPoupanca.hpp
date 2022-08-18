#pragma once
#include "Arquivos_cabecalho/Conta.hpp"
#include <string>

class CPoupanca : Conta<2>
{
public:
	CPoupanca(int numeroAgencia, std::string numeroConta, Titular titular);
};

