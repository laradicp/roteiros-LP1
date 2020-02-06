#include "ControleDePagamentos.h"

void ControleDePagamentos::setPagamentos(Pagamento p)
{
    pagamentos.push_back(p);
}

double ControleDePagamentos::calculaTotalDePagamentos()
{
    double total = 0;
    for (int i = 0; i < pagamentos.size(); i++){
        total += pagamentos[i].getValorDoPagamento();
    }
    return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string n)
{
    for (int i = 0; i < pagamentos.size(); i++){
        if (n == pagamentos[i].getNomeDoFuncionario())
            return true;
    }
    return false;
}
