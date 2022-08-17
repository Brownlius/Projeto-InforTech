#include "../Arquivos_cabecalho/Menu.h"
#include "../Arquivos_cabecalho/Conta.hpp"
#include "../CCorrente.hpp"
#include "../CPoupanca.h"

std::string tipoConta;

std::string geraNumeroConta() {

	unsigned seed = time(0);
	srand(seed);
	int numeroContaAleatorio = rand() % 11111;
	return std::to_string(numeroContaAleatorio);
}

std::string menuTipoConta()
{
	while (tipoConta != "p" && tipoConta != "c") {

		std::cout << "Qual o tipo de conta a ser criada? Poupança(P) ou Corrente(C)." << std::endl;
		std::cin >> tipoConta;

	}
	return tipoConta;
}

std::variant<CCorrente, CPoupanca> TipoConta(std::string tipoConta, std::string numeroContaAleatorio) {

	if (tipoConta == "p") {
		CPoupanca contaP(12, "numeroContaAleatorio");
		return contaP;
	}
	
	CCorrente contaC(12, "numeroContaAleatorio");
	return contaC;
};

void MenuInicial() {
	int escolhaMenu = 0;

	while (escolhaMenu != 1 && escolhaMenu != 2) {

		Print1Menu();
		std::cout << "\n";
		std::cin >> escolhaMenu;
		int get(escolhaMenu);

		switch (escolhaMenu)
		{
		case 1:
			menuTipoConta();
			break;

		case 2:

			exit(0);
			break;
		default:
			std::cout << " Opção inválida! Tente novamente." << std::endl;
			break;
		}

	}
}




