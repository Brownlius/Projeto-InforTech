#include "../Arquivos_cabecalho/Menu.hpp"




std::string Menu::geraNumeroConta() {

	unsigned seed = time(0);
	srand(seed);
	int numeroContaAleatorio = rand() % 11111;
	return std::to_string(numeroContaAleatorio);
}

std::string Menu::menuTipoConta()
{
	while (tipoConta != "p" && tipoConta != "c") {

		std::cout << "Qual o tipo de conta a ser criada? Poupança(P) ou Corrente(C)." << std::endl;
		std::cin >> tipoConta;

	}
	return tipoConta;
}



void Menu::MenuInicial() {
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
			CriaConta(tipoConta, geraNumeroConta());
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
void Menu::preencheInfo() {
	std::cout << "\n Insira seu nome: " << std::endl;
	
	std::getline(std::cin, nomeCompleto);

	std::cout << "\n Insira seu CPF: " << std::endl;
	std::getline(std::cin, cpf);

	std::cout << "\n Insira o nome da sua mãe: " << std::endl;

	std::getline(std::cin, nomeMae);

	std::cout << "\n Digite seu endereço: " << std::endl;

	std::getline(std::cin, endereco);
}
void Menu::CriaConta(std::string tipoConta, std::string numeroContaAleatorio) {
	preencheInfo();
	if (tipoConta == "p") {
		CPoupanca contaP(12, numeroContaAleatorio, Titular(nomeCompleto, nomeMae, endereco, Cpf(cpf)));
		std::cout << "Poupança criada";
	}

	CCorrente contaC(12, numeroContaAleatorio, Titular(nomeCompleto, nomeMae, endereco, Cpf(cpf)));
	std::cout << "Corrente criada";
}



