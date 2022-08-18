#pragma once
#include "Arquivos_cabecalho/Conta.hpp"
#include "Titular.hpp"
#include <string>

class CPoupanca final : public Conta<1>
{
public:
	CPoupanca(int numeroAgencia, std::string numeroConta, Titular titular);
};

