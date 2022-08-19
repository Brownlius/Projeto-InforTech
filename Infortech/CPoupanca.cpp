#include "./CPoupanca.hpp"

CPoupanca::CPoupanca(int numeroAgencia, std::string numeroConta, Titular titular) : Conta(numeroAgencia, numeroConta, titular)
{

}
float CPoupanca::taxaDeSaque() const
{
    return 0.015;
}