#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#include <vector>

class ControleDePagamentos
{
    public:
        void setPagamentos(Pagamento p);

        double calculaTotalDePagamentos();

        bool existePagamentoParaFuncionario(std::string n);

    protected:

    private:
        std::vector<Pagamento> pagamentos;
};

#endif // CONTROLEDEPAGAMENTOS_H
