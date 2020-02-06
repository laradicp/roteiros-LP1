#include "Circulo.h"

Circulo::Circulo()
{
    //ctor
    nome = "Circulo";
    raio = 1;
}

Circulo::Circulo(double r)
{
    //ctor
    nome = "Circulo";
    raio = r;
}

double Circulo::calcularArea()
{
    return PI*raio*raio;
}
