#include "LimiteUltrapassadoException.h"

LimiteUltrapassadoException::LimiteUltrapassadoException()
{
    //ctor
}

LimiteUltrapassadoException::~LimiteUltrapassadoException() throw()
{
    //dtor
}

std::string LimiteUltrapassadoException::mensagemErro()
{
    return "Erro: Saldo acima do limite permitido.";
}
