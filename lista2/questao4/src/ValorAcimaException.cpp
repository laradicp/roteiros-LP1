#include "ValorAcimaException.h"
#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif // IOSTREAM

ValorAcimaException::ValorAcimaException(int n)
{
    //ctor
    num = n;
}

ValorAcimaException::~ValorAcimaException() throw()
{
    //dtor
}

int ValorAcimaException::getLimiteSuperior()
{
    return 100;
}

void ValorAcimaException::exibeMensagem()
{
    std::cout << "\tErro: Valor acima do permitido." << std::endl;
}
