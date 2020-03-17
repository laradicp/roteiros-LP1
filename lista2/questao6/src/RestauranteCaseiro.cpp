#include "RestauranteCaseiro.h"

void RestauranteCaseiro::adicionaAoPedido(Pedido p, int m)
{
    mesas[m - 1].adicionaAoPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante()
{
    double total = 0;

    for (int i = 0; i < MESAS; i++){
        total += mesas[i].calculaTotal();
    }

    return total;
}

double RestauranteCaseiro::calculaTotalMesa(int m)
{
    return mesas[m - 1].calculaTotal();
}

void RestauranteCaseiro::zeraPedidosMesa(int m)
{
    mesas[m - 1].zeraPedidos();
}
