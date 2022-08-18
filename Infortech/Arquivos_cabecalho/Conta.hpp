#pragma once
#include "../Titular.hpp"

#include <string>
#include <utility>
#include <iostream>
#include <variant>

template<int taxaSacar>

class Conta 
{
private:
	int numeroAgencia;
	std::string numeroConta;
protected:
	float saldo;
	Titular titular;

public:

	int getNumeroAgencia() { return numeroAgencia; }
	std::string GetNumeroConta() { return numeroConta; }

	Conta(int numeroAgencia, std::string numeroConta, Titular titular) : numeroAgencia(numeroAgencia), numeroConta(numeroConta), titular(titular)
	{
		float saldo = 0;
	}

	enum validaSaque
	{
		sucesso, valorNegativo, saldoInsuficiente
	};

	std::variant<validaSaque, float> sacar(float valorASacar)
	{

		if (valorASacar < 0) {
			std::cout << "Valor de saque, inválido." << std::endl;
			return valorNegativo;
		}

		float taxa = valorASacar * (taxaSacar / 100);
		float valorDoSaque = valorASacar + (valorASacar * taxa);

		if (valorDoSaque > saldo) {
			std::cout << "Saldo insuficiente" << std::endl;
			return saldoInsuficiente;
		}

		saldo -= valorDoSaque;
		return saldo;
	};


};



