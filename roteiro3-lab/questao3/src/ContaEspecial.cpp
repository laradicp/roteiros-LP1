#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    //ctor
    ContaCorrente();
}

ContaEspecial::ContaEspecial(std::string nC, int n, double sr, double sd)
{
    //ctor
    nomeCliente = nC;
    numero = n;
    salario = sr;
    limite = definirLimite();
    setSaldo(sd);
}

ContaEspecial::~ContaEspecial()
{
    //dtor

}

double ContaEspecial::definirLimite()
{
    return salario*4;
}
