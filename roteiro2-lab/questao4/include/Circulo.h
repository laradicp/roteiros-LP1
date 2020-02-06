#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

#define PI 3.141592

class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        Circulo(double r);

        double calcularArea();

    protected:

    private:
        double raio;
};

#endif // CIRCULO_H
