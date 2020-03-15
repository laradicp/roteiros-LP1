#include <iostream>
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main()
{
    ContaCorrente contaCorrente = ContaCorrente("Paulo", 123, 250, 1000);
    cout << "Saldo de " << contaCorrente.getNomeCliente() << ": R$" << contaCorrente.getSaldo() << endl;
    ContaEspecial contaEspecial = ContaEspecial("Marcos", 456, 250, 1000);
    cout << "Saldo de " << contaEspecial.getNomeCliente() << ": R$" << contaEspecial.getSaldo() << endl;
    Poupanca poupanca = Poupanca("Luiza", 789, 1, 4, 1500);
    cout << "Saldo de " << poupanca.getNomeCliente() << ": R$" << poupanca.getSaldo() << endl;
    poupanca.render();
    cout << "Saldo de " << poupanca.getNomeCliente() << ": R$" << poupanca.getSaldo() << endl;
    return 0;
}
