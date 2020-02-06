#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <FiguraGeometrica.h>


class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();
        Triangulo(double b, double a);

        double calcularArea();

    protected:

    private:
        double base, altura;
};

#endif // TRIANGULO_H
