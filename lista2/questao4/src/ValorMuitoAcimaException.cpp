#include "ValorMuitoAcimaException.h"
#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif // IOSTREAM

ValorMuitoAcimaException::ValorMuitoAcimaException(int n)
{
    //ctor
    num = n;
}

ValorMuitoAcimaException::~ValorMuitoAcimaException() throw()
{
    //dtor
}

int ValorMuitoAcimaException::getLimiteSuperior()
{
    return 100;
}

void ValorMuitoAcimaException::exibeMensagem()
{
    std::cout << "\tErro: Valor muito acima do permitido." << std::endl;
}
