#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data entrega = Data(16, 12, 2019);
    Data data = Data();

    cout << "Mes da entrega da lista: " << entrega.getMesExtenso() << endl << endl;

    cout << "Data: " << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << endl << endl;

    int d, m, a;
    cout << "Insira o novo dia: ";
    cin >> d;
    cout << "Insira o novo mes: ";
    cin >> m;
    cout << "Insira o novo ano: ";
    cin >> a;

    data.setDia(d);
    data.setMes(m);
    data.setAno(a);

    if (data.isBissexto())
        cout << "Ano bissexto" << endl << endl;
    else
        cout << endl;

    int comparacao = data.compara(entrega);

    if (!comparacao)
        cout << "Nova data e data de entrega iguais" << endl;
    else if (comparacao == 1)
        cout << "Nova data posterior a data de entrega" << endl;
    else
        cout << "Nova data anterior a data de entrega" << endl;

    return 0;
}
