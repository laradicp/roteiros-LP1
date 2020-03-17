#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero()
{
    //ctor
}

TestaValidaNumero::~TestaValidaNumero()
{
    //dtor
}

void TestaValidaNumero::validaNumero(int num)
{
    if (num <= 0)
    {
        ValorAbaixoException valorAbaixo = ValorAbaixoException(num);
        throw valorAbaixo;
    }
    if (num > 100 && num < 1000)
    {
        ValorAcimaException valorAcima = ValorAcimaException(num);
        throw valorAcima;
    }
    if (num >= 1000)
    {
        ValorMuitoAcimaException valorMuitoAcima = ValorMuitoAcimaException(num);
        throw valorMuitoAcima;
    }
}
