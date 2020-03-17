#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"

using namespace std;

int main()
{
    Pedido refrigerante = Pedido(1, 1, "Refrigerante", 2), pizza = Pedido(2, 1, "Pizza", 25), sanduiche = Pedido(3, 1, "Sanduiche", 7);
    RestauranteCaseiro lanchoneteCaseira;

    cout << "A mesa 4 pediu 1 refrigerante e 2 pizzas" << endl;
    lanchoneteCaseira.adicionaAoPedido(refrigerante, 4);
    pizza.setQuantidade(2);
    lanchoneteCaseira.adicionaAoPedido(pizza, 4);

    cout << endl << "A mesa 1 pediu 5 refrigerantes, 1 pizza e 3 sanduiches" << endl;
    refrigerante.setQuantidade(5);
    lanchoneteCaseira.adicionaAoPedido(refrigerante, 1);
    pizza.setQuantidade(1);
    lanchoneteCaseira.adicionaAoPedido(pizza, 1);
    sanduiche.setQuantidade(3);
    lanchoneteCaseira.adicionaAoPedido(sanduiche, 1);

    cout << endl << "A mesa 3 pediu 3 refrigerantes e 1 pizza" << endl;
    refrigerante.setQuantidade(3);
    lanchoneteCaseira.adicionaAoPedido(refrigerante, 3);
    lanchoneteCaseira.adicionaAoPedido(pizza, 3);

    cout << endl << "A mesa 4 pediu 4 refrigerantes" << endl;
    refrigerante.setQuantidade(4);
    lanchoneteCaseira.adicionaAoPedido(refrigerante, 4);

    cout << endl << "A mesa 3 cancelou todos os pedidos" << endl;
    cout << "\tSaldo anterior da mesa: R$" << lanchoneteCaseira.calculaTotalMesa(3) << endl;
    lanchoneteCaseira.zeraPedidosMesa(3);
    cout << "\tSaldo atual da mesa: R$" << lanchoneteCaseira.calculaTotalMesa(3) << endl;

    cout << endl << "A mesa 1 pediu a conta" << endl;
    cout << "\tConta da mesa 1: R$" << lanchoneteCaseira.calculaTotalMesa(1) << endl;

    cout << endl << "A mesa 4 pediu a conta" << endl;
    cout << "\tConta da mesa 4: R$" << lanchoneteCaseira.calculaTotalMesa(4) << endl;

    cout << endl << "O restaurante fechou" << endl;
    cout << "\tSaldo do dia: R$" << lanchoneteCaseira.calculaTotalRestaurante() << endl;

    return 0;
}
