#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento
{
    public:
        Pagamento();
        Pagamento(double v, std::string n);

        void setValorDoPagamento(double v);
        double getValorDoPagamento();

        void setNomeDoFuncionario(std::string n);
        std::string getNomeDoFuncionario();

    protected:

    private:
        double valorDoPagamento;
        std::string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
