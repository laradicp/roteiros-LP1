#include "Empregado.h"

Empregado::Empregado()
{
    //ctor
    nome = "Nome";
    sobrenome = "Nao Cadastrado";
    salario = 0;
}

Empregado::Empregado(std::string n, std::string sn, double s)
{
    //ctor
    nome = n;
    sobrenome = sn;
    if(s > 0) salario = s;
    else salario = 0;
}

void Empregado::setNome(std::string n)
{
    nome = n;
}
std::string Empregado::getNome()
{
    return nome;
}

void Empregado::setSobrenome(std::string sn)
{
    sobrenome = sn;
}
std::string Empregado::getSobrenome()
{
    return sobrenome;
}

void Empregado::setSalario(double s)
{
    if(s > 0) salario = s;
    else salario = 0;
}
double Empregado::getSalario()
{
    return salario;
}
