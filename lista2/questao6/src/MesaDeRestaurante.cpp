#include "MesaDeRestaurante.h"

void MesaDeRestaurante::adicionaAoPedido(Pedido p)
{
    int tamanho = pedidos.size();
    bool existe = false;

    for (int i = 0; i < tamanho; i++)
    {
        if (p.getNumero() == pedidos[i].getNumero())
        {
            pedidos[i].setQuantidade(pedidos[i].getQuantidade() + p.getQuantidade());
            existe = true;
            break;
        }

    }
    if (!existe)
        pedidos.push_back(p);
}

void MesaDeRestaurante::zeraPedidos()
{
    pedidos.clear();
}

double MesaDeRestaurante::calculaTotal()
{
    int tamanho = pedidos.size();
    double total = 0;

    for (int i = 0; i < tamanho; i++)
    {
        total += pedidos[i].getPreco()*pedidos[i].getQuantidade();
    }

    return total;
}
