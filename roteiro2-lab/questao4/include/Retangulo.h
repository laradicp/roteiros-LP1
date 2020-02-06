#ifndef RETANGULO_H
#define RETANGULO_H

#include <FiguraGeometrica.h>


class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo();
        Retangulo(double b, double a);

        double calcularArea();

    protected:
        double base, altura;

    private:
};

#endif // RETANGULO_H
