#include "./Arquivos_cabecalho/Conta.hpp"

int Conta::numeroDeContas = 0;

	int Conta::getNumeroAgencia() { return numeroAgencia; }
	std::string Conta::GetNumeroConta() { return numeroConta; }
	float Conta::GetSaldo() { return saldo; }

	Conta::Conta(int numeroAgencia, std::string numeroConta, Titular titular) : numeroAgencia(numeroAgencia), numeroConta(numeroConta), titular(titular)
	{
		float saldo = 0;
		numeroDeContas++;
	}

	std::variant<Conta::validaSaque, float> Conta::sacar(float valorASacar)
	{

		if (valorASacar < 0) {
			std::cout << "Valor de saque, inválido." << std::endl;
			return valorNegativo;
		}

		float taxa = valorASacar * taxaDeSaque();
		float valorDoSaque = valorASacar + taxa;

		if (valorDoSaque > saldo) {
			std::cout << "Saldo insuficiente" << std::endl;
			return saldoInsuficiente;
		}

		saldo -= valorDoSaque;
		return saldo;
	};

	void Conta::depositar(float valorADepositar) {
		if (valorADepositar < 0) {
			std::cout << " Não pode depositar valor negativo" << std::endl;
			return;
		}
		saldo += valorADepositar;
		std::cout << " Deposito realizado com sucesso!\n Saldo atual da conta é: " << saldo << std::endl;
	}

	void Conta::mostraDadosConta() {

		std::cout << " Agência: " << getNumeroAgencia() << std::endl;
		std::cout << " Número da conta: " << GetNumeroConta() << std::endl;
		std::cout << " O saldo da Conta é: " << GetSaldo() << std::endl;
	}



