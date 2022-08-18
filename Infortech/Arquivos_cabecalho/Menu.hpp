#pragma once
#include "./Interface.hpp"
#include <iostream>
#include <variant>
#include <string>
#include <cstdlib>
#include <ctime>
#include "../CCorrente.hpp"
#include "../CPoupanca.hpp"

class Menu 
{

public: //Métodos
	std::string geraNumeroConta();
	std::string menuTipoConta();
	void MenuInicial();
	void preencheInfo();
	void CriaConta(std::string tipoConta, std::string numeroContaAleatorio);

public: //Var
	std::string nomeCompleto;
	std::string tipoConta;
	std::string cpf;
	std::string nomeMae;
	std::string endereco;

	//std::variant<CCorrente, CPoupanca> TipoConta(std::string tipoConta, std::string numeroContaAleatorio) {

	//	if (tipoConta == "p") {
	//		CPoupanca contaP(12, numeroContaAleatorio, Titular("Pedro","Marlene", "Major Jose Pinto",Cpf("04315941123")));
	//		return contaP;
	//	}

	//	CCorrente contaC(12, numeroContaAleatorio, Titular("Pedro", "Marlene", "Major Jose Pinto", Cpf("04315941123")));
	//	return contaC;
	//};
};

