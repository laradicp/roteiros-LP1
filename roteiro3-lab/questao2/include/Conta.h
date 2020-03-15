#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>
#include <iostream>

class Conta : public IConta
{
    public:
        Conta();
        Conta(std::string nCliente, double sMensal, double s, int nConta);
        virtual ~Conta();

        void setNomeCliente(std::string nCliente);
        std::string getNomeCliente();

        void setSalarioMensal(double sMensal);
        double getSalarioMensal();

        double getSaldo();

        double getLimite();

        void setNumeroConta(int nConta);
        double getNumeroConta();

        virtual void sacar(double valor);
        virtual void depositar(double valor);

    protected:
        std::string nomeCliente;
        double salarioMensal, saldo, limite;
        int numeroConta;

        void setSaldo(double s);
        void definirLimite();

    private:
};

#endif // CONTA_H
