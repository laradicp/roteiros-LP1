#include "ContaEspecial.h"

using namespace std;

int main()
{
    Conta conta = Conta("Joao Paulo", 1500, 2750, 123);
    ContaEspecial contaEspecial = ContaEspecial("Maria Luiza", 5000, 15000, 456);

    cout << "Depositar R$500 na conta de " << conta.getNomeCliente() << endl;
    conta.depositar(500);
    cout << "Saldo de " << conta.getNomeCliente() << ": R$" << conta.getSaldo() << endl << endl;

    cout << "Sacar R$1200 da conta de " << contaEspecial.getNomeCliente() << endl;
    contaEspecial.sacar(1200);
    cout << "Saldo de " << contaEspecial.getNomeCliente() << ": R$" << contaEspecial.getSaldo() << endl;

    return 0;
}
