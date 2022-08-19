#include "../Arquivos_cabecalho/MenuInicial.hpp"

std::string MenuInicial::geraNumeroConta() {

	unsigned seed = time(0);
	srand(seed);
	int numeroContaAleatorio = rand() % 11111;
	return std::to_string(numeroContaAleatorio);
}

std::string MenuInicial::menuTipoConta()
{
	while (tipoConta != "p" && tipoConta != "c") {

		std::cout << "Qual o tipo de conta a ser criada? Poupança(P) ou Corrente(C)." << std::endl;
		std::cin >> tipoConta;

	}
	return tipoConta;
}

void MenuInicial::Menu() {
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
void MenuInicial::preencheInfo() {


	std::cout << "\n Insira seu nome: " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, nomeCompleto);

	std::cout << "\n Insira seu CPF: " << std::endl;
	std::getline(std::cin, cpf);

	Cpf cpfMenu(cpf);

	while (Cpf::cpfValido) {
		std::cout << "\n CPF inválido, tente novamente: " << std::endl;
		std::getline(std::cin, cpf);
		Cpf cpfMenu(cpf);
	};
	std::cout << "\n Cpf validado.";
		
	std::cout << "\n Insira o nome da sua mãe: " << std::endl;
	std::getline(std::cin, nomeMae);

	std::cout << "\n Digite seu endereço: " << std::endl;
	std::getline(std::cin, endereco);

}
void MenuInicial::CriaConta(std::string tipoConta, std::string numeroContaAleatorio) {
	preencheInfo();
	if (tipoConta == "p" || tipoConta == "P") {

		Cpf cpfMenu(cpf);
		Titular titular(nomeCompleto, nomeMae, endereco, Cpf(cpfMenu));
		CPoupanca conta(12, numeroContaAleatorio, Titular(titular));
		menuConta(conta, titular);

	}else if (tipoConta == "c" || tipoConta == "C"){
		Titular titular(nomeCompleto, nomeMae, endereco, Cpf(cpf));
		CCorrente conta(12, numeroContaAleatorio, Titular(nomeCompleto, nomeMae, endereco, Cpf(cpf)));
		menuConta(conta, titular);
	}
	

	
}



