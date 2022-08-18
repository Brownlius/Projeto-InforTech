#pragma once
#include "Arquivos_cabecalho/Conta.hpp"
#include <string>

class CCorrente final : public Conta<4>
{
public:
	CCorrente(int numeroAgencia, std::string numeroConta, Titular titular);
};

