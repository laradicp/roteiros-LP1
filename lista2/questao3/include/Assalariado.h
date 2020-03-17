#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario
{
    public:
        Assalariado();
        Assalariado(std::string n, int m, double s);
        virtual ~Assalariado();

        void setSalario(double s);
        virtual double calculaSalario();

    protected:

    private:
        double salario;
};

#endif // ASSALARIADO_H
