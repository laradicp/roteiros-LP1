#include "Assalariado.h"

Assalariado::Assalariado()
{
    //ctor
    nome = "";
    matricula = 0;
    salario = 0;
}

Assalariado::Assalariado(std::string n, int m, double s)
{
    //ctor
    nome = n;
    matricula = m;
    salario = s;
}

Assalariado::~Assalariado()
{
    //dtor
}

void Assalariado::setSalario(double s)
{
    salario = s;
}
double Assalariado::calculaSalario()
{
    return salario;
}
