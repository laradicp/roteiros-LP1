#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <iostream>

class Conta
{
    public:
        Conta();
        Conta(std::string nC, int n);
        virtual ~Conta();

        void sacar(double valor);
        virtual void depositar(double valor);

        void setNomeCliente(std::string nC);
        std::string getNomeCliente();

        void setNumero(int n);
        int getNumero();

    protected:
        std::string nomeCliente;
        int numero;
        double saldo;

    private:
};

#endif // CONTA_H
