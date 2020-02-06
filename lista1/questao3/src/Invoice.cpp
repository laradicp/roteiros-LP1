#include "Invoice.h"

Invoice::Invoice()
{
    //ctor
    numero = 0;
    quantidadeComprada = 0;
    descricao = "Produto nao catalogado";
    preco = 0.0;
}

Invoice::Invoice(int n, int q, std::string d, double p)
{
    //ctor
    setNumero(n);
    setQuantidadeComprada(q);
    setDescricao(d);
    setPreco(p);
}

void Invoice::setNumero(int n)
{
    numero = n;
}
int Invoice::getNumero()
{
    return numero;
}

void Invoice::setQuantidadeComprada(int q)
{
    quantidadeComprada = q;
}
int Invoice::getQuantidadeComprada()
{
    return quantidadeComprada;
}

void Invoice::setDescricao(std::string d)
{
    descricao = d;
}
std::string Invoice::getDescricao()
{
    return descricao;
}

void Invoice::setPreco(double p)
{
    if (p < 0) preco = 0;
    else preco = p;
}
double Invoice::getPreco()
{
    return preco;
}

double Invoice::getInvoiceAmount(){
    if (preco*quantidadeComprada < 0) return 0;
    else return preco*quantidadeComprada;
}
