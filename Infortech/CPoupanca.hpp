#pragma once
#include "Arquivos_cabecalho/Conta.hpp"

class CPoupanca final : public Conta
{
public:

	CPoupanca(int numeroAgencia, std::string numeroConta, Titular titular);
	float taxaDeSaque() const override;
};

