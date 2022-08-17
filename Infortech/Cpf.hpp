#pragma once
#include <string>
#include <iostream>

class Cpf 
{
public:
	Cpf(std::string numeroCpf);

	bool validaCpf(char* numeroCpf) {
            unsigned lenght = 0;
            bool ver1 = 0, ver2 = 0;
            char aux;

            /* contando o tamanho de cpf e verificando se o o tamanho do mesmo é 11
             */
            while (numeroCpf[lenght]) {
                lenght++;
            }

            if (lenght != 11)
                return false;

            /* Calculando o primeiro dígito verificador. Cada dígito tem um peso co-
             * meçando de 1 até 9. Para calculá-lo deve-se somar cada dígito, multi-
             * plicando-se por seu peso e ao final realizar a operação de módulo por
             * 11
             */
            for (int j = 0; j < 9; j++) {
                aux = numeroCpf[j];
                ver1 += atoi(&aux) * (j + 1);
            }

            ver1 %= 11;

            /* Para o segundo dígito verificador calcula-se a partir do segundo dí-
             * gito até o 10º ( dígito verificador 1 ) atribuindo-se o peso de 1  a
             * 9, e no final realizar a operação Módulo por 11
             */
            for (int j = 0; j < 9; j++) {
                aux = numeroCpf[j];
                ver2 += atoi(&aux) * j;
            }

            ver2 += ver1 * 9;
            ver2 %= 11;

            /* compara-se agora ver1 e ver2 com os dígitos do cpf */
            aux = numeroCpf[lenght - 2];
            if (atoi(&aux) == ver1) {
                aux = numeroCpf[lenght - 1];
                if (atoi(&aux) == ver2)
                    return true;
            }
            return false;
        }

        /**
        * Recebe o cpf como parametro por linha de comando
        */
        int main(int argc, char* argv[])
        {
            if (argc > 1) {
                if (validaCpf(argv[1]))
                    cout << "Cpf Correto \n";
                else cout << "Cpf Errado \n";
            }
        }

private:
	std::string numeroCpf;
};

