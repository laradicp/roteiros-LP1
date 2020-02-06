#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
    matricula = 0;
    nome = "Nao identificado";
    salario = 0;
}

Funcionario::Funcionario(int m, std::string n, float s)
{
    //ctor
    setMatricula(m);
    setNome(n);
    setSalario(s);
}

void Funcionario::setMatricula(int m)
{
    matricula = m;
}
int Funcionario::getMatricula()
{
    return matricula;
}

void Funcionario::setNome(std::string n)
{
    nome = n;
}
std::string Funcionario::getNome()
{
    return nome;
}

void Funcionario::setSalario(float s)
{
    salario = s;
}
float Funcionario::getSalario()
{
    return salario;
}
