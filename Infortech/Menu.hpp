#pragma once
#include "Arquivos_cabecalho/Interface.hpp"
#include "Arquivos_cabecalho/Conta.hpp"
#include "CPoupanca.hpp"
#include "CCorrente.hpp"
#include "Titular.hpp"
#include <iostream>
#include <string>

class Menu
{
public:
	void menuConta(Conta& conta, Titular& titular);
};

