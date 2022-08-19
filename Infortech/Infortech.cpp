
#include "Arquivos_cabecalho/Interface.hpp"
#include "Arquivos_cabecalho/MenuInicial.hpp"
#include "Menu.hpp"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	MenuInicial menu;
	PrintSaudacao();
	menu.Menu();

	return 0;
}

