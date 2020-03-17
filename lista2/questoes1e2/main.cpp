#include "ContaEspecial.h"
#include <iostream>

using namespace std;

int main()
{
    Conta conta = Conta("Joao Paulo", 1500, 123);
    cout << "Depositar R$3500 na conta de " << conta.getNomeCliente() << endl;
    try
    {
        conta.depositar(3500);
        cout << "Saldo de " << conta.getNomeCliente() << ": R$" << conta.getSaldo() << endl;
    }
    catch (LimiteUltrapassadoException ex1)
    {
        cout << ex1.mensagemErro() << endl;
    }

    ContaEspecial contaEspecial = ContaEspecial("Maria Luiza", 5000, 456);
    cout << endl << "Depositar R$15000 na conta de " << contaEspecial.getNomeCliente() << endl;
    try
    {
        contaEspecial.depositar(15000);
        cout << "Saldo de " << contaEspecial.getNomeCliente() << ": R$" << contaEspecial.getSaldo() << endl;
    }
    catch (LimiteUltrapassadoException ex2)
    {
        cout << ex2.mensagemErro() << endl;
    }

    cout << endl << "Sacar R$20000 da conta de " << contaEspecial.getNomeCliente() << endl;
    try
    {
        contaEspecial.sacar(20000);
        cout << "Saldo de " << contaEspecial.getNomeCliente() << ": R$" << contaEspecial.getSaldo() << endl;
    }
    catch (SaldoNaoDisponivelException ex3)
    {
        cout << ex3.mensagemErro() << endl;
    }

    return 0;
}
