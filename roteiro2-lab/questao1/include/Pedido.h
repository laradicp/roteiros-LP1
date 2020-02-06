#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido
{
    public:
        Pedido();
        Pedido(int n, int q, std::string d, double p);

        void setNumero(int n);
        int getNumero();

        void setQuantidade(int q);
        int getQuantidade();

        void setDescricao(std::string d);
        std::string getDescricao();

        void setPreco(double p);
        double getPreco();

    protected:

    private:
        int numero, quantidade;
        std::string descricao;
        double preco;
};

#endif // PEDIDO_H
