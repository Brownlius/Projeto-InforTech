#include "Menu.hpp"

void Menu::menuConta(Conta& conta, Titular& titular) {

	system("cls");
	std::cout << "Conta criada com sucesso! \n Acesse as funcionalidade do nosso banco:";

	int escolhaNoMenu;
	char opcao = ' ';

	do
	{
		Print2Menu();
		std::cout << "\n";
		std::cin >> escolhaNoMenu;

		switch (escolhaNoMenu)
		{
		case 1:
			std::cout << "\n 1) Depositar dinheiro <- " << std::endl;
			std::cout << " Quanto deseja depositar? " << std::endl;
			float valorADepositar;
			std::cin >> valorADepositar;
			conta.depositar(valorADepositar);
			break;

		case 2:
			std::cout << "\n 2) Sacar dinheiro <- " << std::endl;
			std::cout << " Quanto deseja sacar? " << std::endl;
			float valorASacar;
			std::cin >> valorASacar;
			conta.sacar(valorASacar);
			break;

		case 3:
			std::cout << "\n 3) Acessar conta <- " << std::endl;
			std::cout << " Os dados de sua conta: " << std::endl;
			titular.mostraDadosTitular();
			conta.mostraDadosConta();
			break;

		case 4:
			PrintDespedida();
			exit(1);

		default:
		{
			std::cout << " Escolha uma opcao válida! " << std::endl;
			break;
		}
		}

		std::cout << " Deseja continuar navegando? Sim(S) ou Não(N): " << std::endl;
		std::cin.ignore();
		std::cin >> opcao;

		if ((opcao == 'n') || (opcao == 'N')) {

			PrintDespedida();
			exit(0);
		}
	} while ((opcao == 's') || (opcao == 'S'));

}
void realizaSaque(Conta& conta, float valorASacar)
{
	std::variant<Conta::validaSaque, float> resultado = conta.sacar(valorASacar);
	if (auto saldo = std::get_if<float>(&resultado)) {
		std::cout << "Novo saldo da conta: " << *saldo << std::endl;
	}

}