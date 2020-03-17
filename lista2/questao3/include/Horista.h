#ifndef HORISTA_H
#define HORISTA_H
#include <Funcionario.h>

class Horista : public Funcionario
{
    public:
        Horista();
        Horista(std::string n, int m, double s, double h);
        virtual ~Horista();

        void setSalarioPorHora(double s);
        double getSalarioPorHora();

        void setHorasTrabalhadas(double h);
        double getHorasTrabalhadas();

        virtual double calculaSalario();

    protected:

    private:
        double salarioPorHora, horasTrabalhadas;
};

#endif // HORISTA_H
