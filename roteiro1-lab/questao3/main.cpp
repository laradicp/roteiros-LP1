#include "Empregado.h"
#include <iostream>

using namespace std;

int main()
{
    Empregado cozinheiro = Empregado("Joao", "da Silva", 1200), inspetora = Empregado("Maria", "de Souza", 3000);

    cout<<"Antes do aumento de 10%:"<<endl;
    cout<<"\tSalario anual de "<<cozinheiro.getNome()<<" "<<cozinheiro.getSobrenome()<<": R$"<<cozinheiro.getSalario()*13<<endl; //13° salario
    cout<<"\tSalario anual de "<<inspetora.getNome()<<" "<<inspetora.getSobrenome()<<": R$"<<inspetora.getSalario()*13<<endl<<endl;

    cozinheiro.setSalario(1.1*cozinheiro.getSalario());
    inspetora.setSalario(1.1*inspetora.getSalario());

    cout<<"Depois do aumento de 10%:"<<endl;
    cout<<"\tSalario anual de "<<cozinheiro.getNome()<<" "<<cozinheiro.getSobrenome()<<": R$"<<cozinheiro.getSalario()*13<<endl; //13° salario
    cout<<"\tSalario anual de "<<inspetora.getNome()<<" "<<inspetora.getSobrenome()<<": R$"<<inspetora.getSalario()*13<<endl;

    return 0;
}
