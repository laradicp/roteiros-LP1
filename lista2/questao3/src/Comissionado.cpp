#include "Comissionado.h"

Comissionado::Comissionado()
{
    nome = "";
    matricula = 0;
    vendasSemanais = 0;
    percentualComissao = 0;
}

Comissionado::Comissionado(std::string n, int m, double v, double p)
{
    //ctor
    nome = n;
    matricula = m;
    vendasSemanais = v;
    percentualComissao = p;
}

Comissionado::~Comissionado()
{
    //dtor
}

void Comissionado::setVendasSemanais(double v)
{
    vendasSemanais = v;
}
double Comissionado::getVendasSemanais()
{
    return vendasSemanais;
}

void Comissionado::setPercentualComissao(double p)
{
    percentualComissao = p/100;
}
double Comissionado::getPercentualComissao()
{
    return percentualComissao*100;
}

double Comissionado::calculaSalario()
{
    return vendasSemanais*percentualComissao;
}
