#include "Pedido.h"

Pedido::Pedido()
{
    //ctor
    numero = 0;
    quantidade = 0;
    descricao = "Pedido nao cadastrado";
    preco = 0;
}

Pedido::Pedido(int n, int q, std::string d, double p)
{
    //ctor
    numero = n;
    quantidade = q;
    descricao = d;
    preco = p;
}

void Pedido::setNumero(int n)
{
    numero = n;
}
int Pedido::getNumero()
{
    return numero;
}

void Pedido::setQuantidade(int q)
{
    quantidade = q;
}
int Pedido::getQuantidade()
{
    return quantidade;
}

void Pedido::setDescricao(std::string d)
{
    descricao = d;
}
std::string Pedido::getDescricao()
{
    return descricao;
}

void Pedido::setPreco(double p)
{
    preco = p;
}
double Pedido::getPreco()
{
    return preco;
}
