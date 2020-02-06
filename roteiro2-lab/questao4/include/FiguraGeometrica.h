#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica();

        void setNome(std::string n);
        std::string getNome();

    protected:
        std::string nome;

    private:
};

#endif // FIGURAGEOMETRICA_H
