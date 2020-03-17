#include "ValorAbaixoException.h"
#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif // IOSTREAM

ValorAbaixoException::ValorAbaixoException(int n)
{
    //ctor
    num = n;
}

ValorAbaixoException::~ValorAbaixoException() throw()
{
    //dtor
}

int ValorAbaixoException::getLimiteInferior()
{
    return 1;
}

void ValorAbaixoException::exibeMensagem()
{
    std::cout << "\tErro: Valor abaixo do permitido." << std::endl;
}
