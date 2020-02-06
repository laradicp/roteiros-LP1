#include "Pessoa.h"

Pessoa::Pessoa()
{
    //ctor
    nome = "Nao identificado";
    idade = 0;
    telefone = "Nao cadastrado";
}

Pessoa::Pessoa(std::string n, int i, std::string t)
{
    //ctor
    nome = n;
    idade = i;
    telefone = t;
}

void Pessoa::setNome(std::string n)
{
    nome = n;
}
std::string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setIdade(int i)
{
    idade = i;
}
int Pessoa::getIdade()
{
    return idade;
}

void Pessoa::setTelefone(std::string t)
{
    telefone = t;
}
std::string Pessoa::getTelefone()
{
    return telefone;
}
