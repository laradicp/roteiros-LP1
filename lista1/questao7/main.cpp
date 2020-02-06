#include "ControleDePagamentos.h"
#include <iostream>

using namespace std;

void ApresentaMenu()
{
    cout<<("=========================================================================================")<<endl;
    cout<<("\t(1) Registrar pagamento")<<endl;
    cout<<("\t(2) Total de pagamentos")<<endl;
    cout<<("\t(3) Buscar pagamento para funcionario")<<endl;
    cout<<("\t(4) Sair")<<endl;
    cout<<("=========================================================================================")<<endl;
    cout<<"\t";
}

int main()
{
    ControleDePagamentos controle;
    int menu, menuEditar, i;
    Pagamento pagamento;
    double v;
    string n;

    pagamento = Pagamento();
    controle.setPagamentos(pagamento);

    pagamento = Pagamento(980, "Joao Silva");
    controle.setPagamentos(pagamento);

    while(1){
        ApresentaMenu();
        cin>>menu;

        if(menu == 4) break;

        switch(menu){
            case 1:
                cout<<endl<<"\tDigite o valor do pagamento: ";
                cin>>v;
                pagamento.setValorDoPagamento(v);

                cout<<"\tDigite o nome do funcionario: ";
                cin.ignore();
                getline(cin, n);
                pagamento.setNomeDoFuncionario(n);

                controle.setPagamentos(pagamento);
                cout<<endl<<"\tPagamento registrado com sucesso"<<endl;
                break;

            case 2:
                cout<<endl<<"\tR$"<<controle.calculaTotalDePagamentos()<<endl;
                break;

            case 3:
                cout<<endl<<"\tDigite o nome do funcionario: ";
                cin.ignore();
                getline(cin, n);

                if(controle.existePagamentoParaFuncionario(n)) cout<<endl<<"\tExistem pagamentos para "<<n<<endl;
                else cout<<endl<<"\tNao existem pagamentos para "<<n<<endl;
        }
    }
    return 0;
}
