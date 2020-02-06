#ifndef INVOICE_H
#define INVOICE_H

#include <string>


class Invoice
{
    public:
        Invoice();
        Invoice(int n, int q, std::string d, double p);

        void setNumero(int n);
        int getNumero();

        void setQuantidadeComprada(int q);
        int getQuantidadeComprada();

        void setDescricao(std::string d);
        std::string getDescricao();

        void setPreco(double p);
        double getPreco();

        double getInvoiceAmount();

    protected:

    private:
        int numero, quantidadeComprada;
        std::string descricao;
        double preco;
};

#endif // INVOICE_H
