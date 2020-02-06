#include "Pagamento.h"

Pagamento::Pagamento()
{
    //ctor
    valorDoPagamento = 0;
    nomeDoFuncionario = "Nao identificado";
}

Pagamento::Pagamento(double v, std::string n)
{
    //ctor
    valorDoPagamento = v;
    nomeDoFuncionario = n;
}

void Pagamento::setValorDoPagamento(double v)
{
   valorDoPagamento = v;
}
double Pagamento::getValorDoPagamento()
{
    return valorDoPagamento;
}

void Pagamento::setNomeDoFuncionario(std::string n)
{
    nomeDoFuncionario = n;
}
std::string Pagamento::getNomeDoFuncionario()
{
    return nomeDoFuncionario;
}
