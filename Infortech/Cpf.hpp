﻿#pragma once
#include <string>
#include <iostream>
#include <vector>

class Cpf 
{
public:
	Cpf(std::string numeroCpf);

	bool validaCpf(std::string numeroCpf);

private:
	std::string numeroCpf;
};

