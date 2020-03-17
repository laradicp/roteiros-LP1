#include "Conta.h"

Conta::Conta()
{
    //ctor
    nomeCliente = "";
    salarioMensal = 0;

    definirLimite();

    saldo = 0;
    numeroConta = 0;
}

Conta::Conta(std::string nCliente, double sMensal, int nConta)
{
    //ctor
    nomeCliente = nCliente;
    salarioMensal = sMensal;

    definirLimite();

    numeroConta = nConta;
    saldo = 0;
}

Conta::~Conta()
{
    //dtor
}

void Conta::setNomeCliente(std::string nCliente)
{
    nomeCliente = nCliente;
}
std::string Conta::getNomeCliente()
{
    return nomeCliente;
}

void Conta::setSalarioMensal(double sMensal)
{
    salarioMensal = sMensal;
}
double Conta::getSalarioMensal()
{
    return salarioMensal;
}

void Conta::setSaldo(double s)
{
    if (s > limite)
    {
        LimiteUltrapassadoException limiteUltrapassado = LimiteUltrapassadoException();
        throw limiteUltrapassado;
    }
    else
        saldo = s;
}
double Conta::getSaldo()
{
    return saldo;
}

void Conta::definirLimite()
{
    limite = 2*salarioMensal;
}
double Conta::getLimite()
{
    return limite;
}

void Conta::setNumeroConta(int nConta)
{
    numeroConta = nConta;
}
double Conta::getNumeroConta()
{
    return numeroConta;
}

void Conta::sacar(double valor)
{
    if (valor > saldo)
    {
        SaldoNaoDisponivelException saldoNaoDisponivel = SaldoNaoDisponivelException();
        throw saldoNaoDisponivel;
    }
    else
    {
        double s = saldo - valor;
        setSaldo(s);
    }
}
void Conta::depositar(double valor)
{
    double s = saldo + valor;
    setSaldo(s);
}
