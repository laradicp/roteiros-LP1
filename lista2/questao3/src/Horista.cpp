#include "Horista.h"

Horista::Horista()
{
    //ctor
    nome = "";
    matricula = 0;
    salarioPorHora = 0;
    horasTrabalhadas = 0;
}

Horista::Horista(std::string n, int m, double s, double h)
{
    //ctor
    nome = n;
    matricula = m;
    salarioPorHora = s;
    horasTrabalhadas = h;
}

Horista::~Horista()
{
    //dtor
}

void Horista::setSalarioPorHora(double s)
{
    salarioPorHora = s;
}
double Horista::getSalarioPorHora()
{
    return salarioPorHora;
}

void Horista::setHorasTrabalhadas(double h)
{
    horasTrabalhadas = h;
}
double Horista::getHorasTrabalhadas()
{
    return horasTrabalhadas;
}

double Horista::calculaSalario()
{
    if (horasTrabalhadas > 40)
        return salarioPorHora*(1.5*horasTrabalhadas - 20); //salarioPorHora*40 + salarioPorHora*1.5*(horasTrabalhadas - 40)
    else
        return salarioPorHora*horasTrabalhadas;
}
