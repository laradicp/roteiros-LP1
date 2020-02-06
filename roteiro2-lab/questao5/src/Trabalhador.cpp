#include "Trabalhador.h"

Trabalhador::Trabalhador()
{
    //ctor
    nome = "Nao identificado";
    salario = 0;
}

void Trabalhador::setNome(std::string n)
{
    nome = n;
}

std::string Trabalhador::getNome()
{
    return nome;
}
