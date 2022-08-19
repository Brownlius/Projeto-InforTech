#pragma once
#include <iostream>
#include <variant>
#include <string>
#include <cstdlib>
#include <ctime>

#include "./Interface.hpp"
#include "../CCorrente.hpp"
#include "../CPoupanca.hpp"
#include "../Cpf.hpp"
#include "../Titular.hpp"
#include "../Arquivos_cabecalho/Conta.hpp"
#include "../Menu.hpp"

class MenuInicial : Menu
{

public: //Métodos
	std::string geraNumeroConta();
	std::string menuTipoConta();
	void Menu();
	void preencheInfo();
	void CriaConta(std::string tipoConta, std::string numeroContaAleatorio);

public: //Var
	std::string nomeCompleto;
	std::string tipoConta;
	std::string cpf;
	std::string nomeMae;
	std::string endereco;

};

