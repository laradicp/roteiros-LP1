#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora()
{
    //ctor
    nome = "Nao identificado";
    salario = 0;
    valorDaHora = 0;
}

TrabalhadorPorHora::TrabalhadorPorHora(std::string n, double v)
{
    //ctor
    nome = n;
    salario = 0;
    valorDaHora = v;
}

void TrabalhadorPorHora::setValorDaHora(double v)
{
    valorDaHora = v;
}

double TrabalhadorPorHora::getValorDaHora()
{
    return valorDaHora;
}

void TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais)
{
    if(horasSemanais > 40)
        salario = valorDaHora*(40 + 1.5*(horasSemanais - 40));
    else
        salario = valorDaHora*horasSemanais;
}

double TrabalhadorPorHora::getSalarioSemanal()
{
    return salario;
}
double TrabalhadorPorHora::getSalarioMensal()
{
    return salario*4;
}
