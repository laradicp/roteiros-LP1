#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include <Conta.h>

class ContaCorrente : public Conta
{
    public:
        ContaCorrente();
        ContaCorrente(std::string nC, int n, double sr, double sd);
        virtual ~ContaCorrente();

        virtual void depositar(double valor);

        void setSalario(double sr);
        double getSalario();

        double getSaldo();

    protected:
        double salario;
        int limite;

        void setSaldo(double sd);

    private:
        virtual double definirLimite();
};

#endif // CONTACORRENTE_H
