#include "Triangulo.h"

Triangulo::Triangulo()
{
    //ctor
    nome = "Triangulo";
    base = 1;
    altura = 1;
}

Triangulo::Triangulo(double b, double a)
{
    //ctor
    nome = "Triangulo";
    base = b;
    altura = a;
}

double Triangulo::calcularArea()
{
    return base*altura/2;
}
