#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
{
    //ctor
    Conta();

    salario = 0;
    limite = 0;
}

ContaCorrente::ContaCorrente(std::string nC, int n, double sr, double sd):Conta(nC, n)
{
    //ctor
    salario = sr;
    limite = definirLimite();
    setSaldo(sd);
}

ContaCorrente::~ContaCorrente()
{
    //dtor
}

double ContaCorrente::definirLimite()
{
    return salario*2;
}

void ContaCorrente::setSaldo(double sd)
{
    if (sd > limite)
    {
        std::cout << "Erro: Saldo acima do limite permitido. Depositado apenas ate o limite." << std::endl;
        saldo = limite;
    }
    else
        saldo = sd;
}
double ContaCorrente::getSaldo()
{
    return saldo;
}

void ContaCorrente::depositar(double valor)
{
    double s = saldo + valor;

    setSaldo(s);
}

void ContaCorrente::setSalario(double sr)
{
    salario = sr;
}
double ContaCorrente::getSalario()
{
    return salario;
}
