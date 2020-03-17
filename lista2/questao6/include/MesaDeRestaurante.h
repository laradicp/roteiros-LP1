#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#include <vector>

class MesaDeRestaurante
{
    public:
        void adicionaAoPedido(Pedido p);

        void zeraPedidos();

        double calculaTotal();

    protected:

    private:
        std::vector<Pedido> pedidos;
};

#endif // MESADERESTAURANTE_H
