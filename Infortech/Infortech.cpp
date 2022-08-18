// Infortech.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
#include "Arquivos_cabecalho/Interface.h"
#include "Arquivos_cabecalho/Menu.h"
#include "Arquivos_cabecalho/Conta.hpp"

#include <iostream>
#include <string>
#include "Cpf.hpp"

using namespace std;

int main()
{
	Cpf cpfteste("45895416616");
	PrintSaudacao();
	MenuInicial();

	return 0;
}

