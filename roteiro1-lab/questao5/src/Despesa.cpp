#include "Despesa.h"

Despesa::Despesa()
{
    //ctor
    valor = 0;
    tipoDeGasto = "Desconhecido";
}

Despesa::Despesa(double v, std::string t)
{
    //ctor
    valor = v;
    tipoDeGasto = t;
}

void Despesa::setValor(double v)
{
    valor = v;
}
double Despesa::getValor()
{
    return valor;
}

void Despesa::setTipoDeGasto(std::string t)
{
    tipoDeGasto = t;
}
std::string Despesa::getTipoDeGasto()
{
    return tipoDeGasto;
}
