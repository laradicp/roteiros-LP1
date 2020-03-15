#include "Conta.h"

Conta::Conta()
{
    //ctor
    nomeCliente = "";
    numero = 0;
    saldo = 0;
}

Conta::Conta(std::string nC, int n)
{
    //ctor
    nomeCliente = nC;
    numero = n;
    saldo = 0;
}

Conta::~Conta()
{
    //dtor
}

void Conta::sacar(double valor)
{
    if(valor > saldo)
        std::cout << "Erro: Saldo insuficiente.";
    else
        saldo -= valor;
}
void Conta::depositar(double valor)
{
    saldo += valor;
}

void Conta::setNomeCliente(std::string nC)
{
    nomeCliente = nC;
}
std::string Conta::getNomeCliente()
{
    return nomeCliente;
}

void Conta::setNumero(int n)
{
    numero = n;
}
int Conta::getNumero()
{
    return numero;
}
