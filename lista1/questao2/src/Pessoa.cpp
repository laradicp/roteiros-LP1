#include "Pessoa.h"

Pessoa::Pessoa(std::string n)
{
    //ctor
    nome = n;
    endereco = Endereco();
    telefone = "Telefone nao cadastrado";
}

Pessoa::Pessoa(std::string n, Endereco e, std::string t)
{
    //ctor
    nome = n;
    endereco = e;
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

void Pessoa::setEndereco(Endereco e)
{
    endereco = e;
}
std::string Pessoa::getEndereco()
{
    return endereco.toString();
}

void Pessoa::setTelefone(std::string t)
{
    telefone = t;
}
std::string Pessoa::getTelefone()
{
    return telefone;
}
