#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"
#define MESAS 10

class RestauranteCaseiro
{
    public:
        void adicionaAoPedido(Pedido p, int m);

        double calculaTotalRestaurante();

        double calculaTotalMesa(int m);

        void zeraPedidosMesa(int m);

    protected:

    private:
        MesaDeRestaurante mesas[MESAS];
};

#endif // RESTAURANTECASEIRO_H
