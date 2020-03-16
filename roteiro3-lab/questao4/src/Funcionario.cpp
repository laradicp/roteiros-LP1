#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
    nome = "";
    matricula = 0;
}

Funcionario::Funcionario(std::string n, int m)
{
    //ctor
    nome = n;
    matricula = m;
}

Funcionario::~Funcionario()
{
    //dtor
}

void Funcionario::setNome(std::string n)
{
    nome = n;
}
std::string Funcionario::getNome()
{
    return nome;
}

void Funcionario::setMatricula(int m)
{
    matricula = m;
}
int Funcionario::getMatricula()
{
    return matricula;
}
