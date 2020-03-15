#ifndef POUPANCA_H
#define POUPANCA_H

#include <Conta.h>


class Poupanca : public Conta
{
    public:
        Poupanca();
        Poupanca(std::string nC, int n, int v, double t, double sd);
        virtual ~Poupanca();

        double render();

        double getSaldo();

    protected:

    private:
        int variacao;
        double taxaRendimento;
};

#endif // POUPANCA_H
