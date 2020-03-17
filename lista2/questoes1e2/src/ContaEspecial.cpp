#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    //ctor
    nomeCliente = "";
    salarioMensal = 0;

    definirLimite();

    saldo = 0;
    numeroConta = 0;
}

ContaEspecial::ContaEspecial(std::string nCliente, double sMensal, int nConta)
{
    //ctor
    nomeCliente = nCliente;
    salarioMensal = sMensal;

    definirLimite();

    saldo = 0;
    numeroConta = nConta;
}

ContaEspecial::~ContaEspecial()
{
    //dtor
}

void ContaEspecial::definirLimite()
{
    limite = 3*salarioMensal;
}
