#pragma once
#include "../Titular.hpp"
#include <string>
#include <utility>
#include <iostream>
#include <variant>

class Conta
{
public:

	Conta(int numeroAgencia, std::string numeroConta, Titular titular);
	virtual float taxaDeSaque() const = 0;
	int getNumeroAgencia();
	std::string GetNumeroConta();
	float GetSaldo();
	enum validaSaque
	{
		sucesso, valorNegativo, saldoInsuficiente
	};
	std::variant<validaSaque, float> sacar(float valorASacar);
	void depositar(float valorADepositar);
	void mostraDadosConta();
private:

	static int numeroDeContas;
	int numeroAgencia;
	std::string numeroConta;
protected:

	float saldo;
	Titular titular;
};



