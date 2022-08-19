#pragma once
#include "Arquivos_cabecalho/Conta.hpp"

class CCorrente final : public Conta
{
public:

	CCorrente(int numeroAgencia, std::string numeroConta, Titular titular);
	float taxaDeSaque() const override;

};

