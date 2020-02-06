#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include <Trabalhador.h>


class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(std::string n, double v);

        void setValorDaHora(double v);
        double getValorDaHora();

        void calcularPagamentoSemanal(int horasSemanais);

        double getSalarioSemanal();
        double getSalarioMensal();

    protected:

    private:
        double valorDaHora;
};

#endif // TRABALHADORPORHORA_H
