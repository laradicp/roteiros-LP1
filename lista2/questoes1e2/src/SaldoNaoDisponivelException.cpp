#include "SaldoNaoDisponivelException.h"

SaldoNaoDisponivelException::SaldoNaoDisponivelException()
{
    //ctor
}

SaldoNaoDisponivelException::~SaldoNaoDisponivelException() throw()
{
    //dtor
}

std::string SaldoNaoDisponivelException::mensagemErro()
{
    return "Erro: Valor acima do saldo disponivel.";
}
