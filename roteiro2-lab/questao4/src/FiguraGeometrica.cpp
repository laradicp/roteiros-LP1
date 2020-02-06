#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica()
{
    //ctor
    nome = "Figura nao identificada";
}

void FiguraGeometrica::setNome(std::string n)
{
    nome = n;
}
std::string FiguraGeometrica::getNome()
{
    return nome;
}
