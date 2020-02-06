#include "Pessoa.h"
#include <iostream>
#include <vector>

using namespace std;

void ApresentaMenu()
{
    cout<<("=========================================================================================")<<endl;
    cout<<("\t(1) Cadastrar novo perfil")<<endl;
    cout<<("\t(2) Editar perfil")<<endl;
    cout<<("\t(3) Listar perfis")<<endl;
    cout<<("\t(4) Sair")<<endl;
    cout<<("=========================================================================================")<<endl;
    cout<<"\t";
}

void ApresentaMenuEditar()
{
    cout<<("=========================================================================================")<<endl;
    cout<<("\t(1) Editar nome")<<endl;
    cout<<("\t(2) Editar idade")<<endl;
    cout<<("\t(3) Editar telefone")<<endl;
    cout<<("=========================================================================================")<<endl;
    cout<<"\t";
}

void ListaPerfis(vector<Pessoa> p)
{
    for (int i = 0; i < p.size(); i++){
        cout<<"\tPerfil "<<i+1<<endl;
        cout<<"\tNome: "<<p[i].getNome()<<endl;
        cout<<"\tIdade: "<<p[i].getIdade()<<endl;
        cout<<"\tTelefone: "<<p[i].getTelefone()<<endl;
        if (i < p.size() - 1) cout<<endl;
    }
}

int main()
{
    vector<Pessoa> pessoa;
    pessoa.push_back(Pessoa());
    int menu, menuEditar, j;
    int i;
    string n, t;

    while(1){
        ApresentaMenu();
        cin>>menu;

        if(menu == 4) break;

        switch(menu){
            case 1:
                cout<<endl<<"\tNome: ";
                cin.ignore();
                getline(cin, n);

                cout<<"\tIdade: ";
                cin>>i;

                cout<<"\tTelefone: ";
                cin.ignore();
                getline(cin, t);

                pessoa.push_back(Pessoa(n, i, t));
                cout<<endl<<"\tPerfil cadastrado com sucesso"<<endl;
                break;

            case 2:
                ApresentaMenuEditar();
                cin>>menuEditar;
                cout<<endl;

                ListaPerfis(pessoa);
                cout<<endl<<"\tDigite o perfil que deseja editar: ";
                cin>>j;
                j--;

                switch(menuEditar){
                    case 1:
                        cout<<"\tNovo nome: ";
                        cin.ignore();
                        getline(cin, n);

                        pessoa[j].setNome(n);
                        cout<<endl<<"\tPerfil editado com sucesso"<<endl;
                        break;

                    case 2:
                        cout<<"\tNova idade: ";
                        cin>>i;

                        pessoa[j].setIdade(i);
                        cout<<endl<<"\tPerfil editado com sucesso"<<endl;
                        break;

                    case 3:
                        cout<<"\tNovo telefone: ";
                        cin>>t;

                        pessoa[j].setTelefone(t);
                        cout<<endl<<"\tPerfil editado com sucesso"<<endl;
                }
                break;

            case 3:
                cout<<endl;
                ListaPerfis(pessoa);
        }
    }

    return 0;
}
