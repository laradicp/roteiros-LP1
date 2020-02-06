#include "Invoice.h"
#include <iostream>
#include <vector>

using namespace std;

void ApresentaMenu()
{
    cout<<("=========================================================================================")<<endl;
    cout<<("\t(1) Cadastrar novo produto")<<endl;
    cout<<("\t(2) Editar produto")<<endl;
    cout<<("\t(3) Calcular faturamento de produto")<<endl;
    cout<<("\t(4) Listar produtos")<<endl;
    cout<<("\t(5) Sair")<<endl;
    cout<<("=========================================================================================")<<endl;
    cout<<"\t";
}

void ApresentaMenuEditar()
{
    cout<<("=========================================================================================")<<endl;
    cout<<("\t(1) Editar descricao")<<endl;
    cout<<("\t(2) Editar numero")<<endl;
    cout<<("\t(3) Editar quantidade comprada")<<endl;
    cout<<("\t(4) Editar preco")<<endl;
    cout<<("=========================================================================================")<<endl;
    cout<<"\t";
}

void ListaProdutos(vector<Invoice> v)
{
    for (int i = 0; i < v.size(); i++){
        cout<<"\tProduto "<<i+1<<endl;
        cout<<"\tDescricao: "<<v[i].getDescricao()<<endl;
        cout<<"\tNumero: "<<v[i].getNumero()<<endl;
        cout<<"\tQuantidade comprada: "<<v[i].getQuantidadeComprada()<<endl;
        cout<<"\tPreco: R$"<<v[i].getPreco()<<endl;
        if (i < v.size() - 1) cout<<endl;
    }
}

int main()
{
    vector<Invoice> produto;
    produto.push_back(Invoice());
    int menu, menuEditar, i;
    int n, q;
    string d;
    double p;

    while(1){
        ApresentaMenu();
        cin>>menu;

        if(menu == 5) break;

        switch(menu){
            case 1:
                cout<<endl<<"\tDigite a descricao do produto: ";
                cin.ignore();
                getline(cin, d);

                cout<<"\tDigite o numero do produto: ";
                cin>>n;

                cout<<"\tDigite a quantidade comprada do produto: ";
                cin>>q;

                cout<<"\tDigite o preco do produto: ";
                cin>>p;

                produto.push_back(Invoice(n, q, d, p));
                cout<<endl<<"\tProduto cadastrado com sucesso"<<endl;
                break;

            case 2:
                ApresentaMenuEditar();
                cin>>menuEditar;
                cout<<endl;

                ListaProdutos(produto);
                cout<<endl<<"\tDigite o produto que deseja editar: ";
                cin>>i;
                i--;

                switch(menuEditar){
                    case 1:
                        cout<<"\tDigite a nova descricao do produto: ";
                        cin.ignore();
                        getline(cin, d);

                        produto[i].setDescricao(d);
                        cout<<endl<<"\tProduto editado com sucesso"<<endl;
                        break;

                    case 2:
                        cout<<"\tDigite o novo numero do produto: ";
                        cin>>n;

                        produto[i].setNumero(n);
                        cout<<endl<<"\tProduto editado com sucesso"<<endl;
                        break;

                    case 3:
                        cout<<"\tDigite a nova quantidade comprada do produto: ";
                        cin>>q;

                        produto[i].setQuantidadeComprada(q);
                        cout<<endl<<"\tProduto editado com sucesso"<<endl;
                        break;

                    case 4:
                        cout<<"\tDigite o novo preco do produto: ";
                        cin>>p;

                        produto[i].setPreco(p);
                        cout<<endl<<"\tProduto editado com sucesso"<<endl;
                        break;
                }
                break;

            case 3:
                ListaProdutos(produto);
                cout<<endl<<"\tDigite o produto que deseja calcular o faturamento: ";
                cin>>i;
                i--;

                cout<<"\tFaturamento: R$"<<produto[i].getInvoiceAmount()<<endl;
                break;

            case 4:
                cout<<endl;
                ListaProdutos(produto);
        }
    }
    return 0;
}
