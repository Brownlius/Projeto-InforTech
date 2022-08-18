
#include "Arquivos_cabecalho/Interface.hpp"
#include "Arquivos_cabecalho/Menu.hpp"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	Menu menu;
	PrintSaudacao();
	menu.MenuInicial();

	return 0;
}

