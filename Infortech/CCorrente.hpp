#pragma once
#include "Arquivos_cabecalho/Conta.hpp"

class CCorrente final : public Conta<4>
{
public:

	CCorrente(int NumeroAgencia, std::string numeroConta);
};

