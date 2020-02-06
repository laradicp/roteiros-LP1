#include "Retangulo.h"

Retangulo::Retangulo()
{
    //ctor
    nome = "Retangulo";
    base = 2;
    altura = 1;
}

Retangulo::Retangulo(double b, double a)
{
    //ctor
    nome = "Retangulo";
    base = b;
    altura = a;
}

double Retangulo::calcularArea()
{
    return base*altura;
}
