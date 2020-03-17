#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException()
{
    //ctor
    nome = "";
}

FuncionarioNaoExisteException::FuncionarioNaoExisteException(std::string n)
{
    //ctor
    nome = n;
}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException() throw()
{
    //dtor
}

void FuncionarioNaoExisteException::setNome(std::string n)
{
    nome = n;
}
std::string FuncionarioNaoExisteException::getNome()
{
    return nome;
}

void FuncionarioNaoExisteException::exibeMensagem()
{
    std::cout << "\t\tErro: Funcionario de nome " << nome << " nao existe." << std::endl;
}
