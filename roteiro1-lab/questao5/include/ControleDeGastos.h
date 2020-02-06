#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <vector>

class ControleDeGastos
{
    public:
        ControleDeGastos();

        void setDespesa(Despesa d);
        Despesa getDespesa(int pos);

        double calculaTotalDeDespesas();

        bool existeDespesaDoTipo(std::string t);

    protected:

    private:
        std::vector<Despesa> despesas;
};

#endif // CONTROLEDEGASTOS_H
