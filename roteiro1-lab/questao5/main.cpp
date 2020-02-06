#include "ControleDeGastos.h"
#include <iostream>

using namespace std;

void ApresentaMenu()
{
    cout<<("=========================================================================================")<<endl;
    cout<<("\t(1) Registrar despesa")<<endl;
    cout<<("\t(2) Total de despesas")<<endl;
    cout<<("\t(3) Buscar tipo")<<endl;
    cout<<("\t(4) Sair")<<endl;
    cout<<("=========================================================================================")<<endl;
    cout<<"\t";
}

int main()
{
    ControleDeGastos controle;
    int menu, menuEditar, i;
    Despesa despesa;
    double v;
    string t;

    despesa = Despesa();
    controle.setDespesa(despesa);

    despesa = Despesa(499.90, "Ingresso de show");
    controle.setDespesa(despesa);

    while(1){
        ApresentaMenu();
        cin>>menu;

        if(menu == 4) break;

        switch(menu){
            case 1:
                cout<<endl<<"\tDigite o valor da despesa: ";
                cin>>v;
                despesa.setValor(v);

                cout<<"\tDigite o tipo da despesa: ";
                cin.ignore();
                getline(cin, t);
                despesa.setTipoDeGasto(t);

                controle.setDespesa(despesa);
                cout<<endl<<"\tDespesa registrada com sucesso"<<endl;
                break;

            case 2:
                cout<<endl<<"\tR$"<<controle.calculaTotalDeDespesas()<<endl;
                break;

            case 3:
                cout<<endl<<"\tDigite o tipo da despesa: ";
                cin.ignore();
                getline(cin, t);

                if(controle.existeDespesaDoTipo(t)) cout<<endl<<"\tExistem despesas do tipo "<<t<<endl;
                else cout<<endl<<"\tNao existem despesas do tipo "<<t<<endl;
        }
    }
    return 0;
}
