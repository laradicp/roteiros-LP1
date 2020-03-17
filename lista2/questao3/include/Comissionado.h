#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include <Funcionario.h>

class Comissionado : public Funcionario
{
    public:
        Comissionado();
        Comissionado(std::string n, int m, double v, double p);
        virtual ~Comissionado();

        void setVendasSemanais(double v);
        double getVendasSemanais();

        void setPercentualComissao(double p);
        double getPercentualComissao();

        virtual double calculaSalario();

    protected:

    private:
        double vendasSemanais, percentualComissao;
};

#endif // COMISSIONADO_H
