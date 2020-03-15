#include "Poupanca.h"

Poupanca::Poupanca()
{
    //ctor
    Conta();

    variacao = 51;
}

Poupanca::Poupanca(std::string nC, int n, int v, double t, double sd):Conta(nC, n)
{
    //ctor
    variacao = v;
    taxaRendimento = t/100;
    saldo = sd;
}

Poupanca::~Poupanca()
{
    //dtor
}

double Poupanca::render()
{
    if (variacao == 1)
        return saldo = 1.005*(1 + taxaRendimento)*saldo;
    else
        return saldo = (1 + taxaRendimento)*saldo;
}

double Poupanca::getSaldo()
{
    return saldo;
}
