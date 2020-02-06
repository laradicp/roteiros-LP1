#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos()
{
    //ctor
}

void ControleDeGastos::setDespesa(Despesa d)
{
    despesas.push_back(d);
}
Despesa ControleDeGastos::getDespesa(int pos)
{
    return despesas[pos];
}

double ControleDeGastos::calculaTotalDeDespesas()
{
    double total = 0;
    for (int i = 0; i < despesas.size(); i++){
        total += despesas[i].getValor();
    }
    return total;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string t)
{
    for (int i = 0; i < despesas.size(); i++){
        if(despesas[i].getTipoDeGasto() == t){
            return true;
        }
    }
    return false;
}
