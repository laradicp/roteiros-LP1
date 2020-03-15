#include "OrcamentoEstouradoException.h"

OrcamentoEstouradoException::OrcamentoEstouradoException()
{
    //ctor
    orcamentoMaximo = 0;
}

OrcamentoEstouradoException::OrcamentoEstouradoException(double o)
{
    //ctor
    orcamentoMaximo = o;
}

OrcamentoEstouradoException::~OrcamentoEstouradoException() throw()
{
    //dtor
}

void OrcamentoEstouradoException::setOrcamentoMaximo(double o)
{
    orcamentoMaximo = o;
}
double OrcamentoEstouradoException::getOrcamentoMaximo()
{
    return orcamentoMaximo;
}

void OrcamentoEstouradoException::exibeMensagem()
{
    std::cout << "\t\tErro: Orcamento maximo de R$" << orcamentoMaximo << " excedido." << std::endl;
}
