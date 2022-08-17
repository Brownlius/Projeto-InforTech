#include "./Menu.h"


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
			criaContas();
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

