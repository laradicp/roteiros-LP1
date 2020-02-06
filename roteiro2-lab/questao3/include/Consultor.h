#ifndef CONSULTOR_H
#define CONSULTOR_H

#include "Funcionario.h"

class Consultor : public Funcionario
{
    public:
        Consultor();
        Consultor(int m, std::string n, float s);

        float getSalario();

        float getSalario(float percentual);

    protected:

    private:
};

#endif // CONSULTOR_H
