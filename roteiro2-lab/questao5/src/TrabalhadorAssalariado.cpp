#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado()
{
    //ctor
    nome = "Nao identificado";
    salario = 0;
}

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string n, double s)
{
    //ctor
    nome = n;
    salario = s;
}

void TrabalhadorAssalariado::setSalario(double s)
{
    salario = s;
}
double TrabalhadorAssalariado::getSalarioMensal()
{
    return salario;
}
double TrabalhadorAssalariado::getSalarioSemanal()
{
    return salario/4;
}
