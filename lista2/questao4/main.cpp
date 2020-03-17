#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif // IOSTREAM
#include "TestaValidaNumero.h"

using namespace std;

int main()
{
    TestaValidaNumero testa;
    int opcao, num;

    while(1)
    {
        cout << "================================================" << endl;
        cout << "\t[1] Validar numero" << endl;
        cout << "\t[2] Sair" << endl;
        cout << "================================================" << endl;

        cout << "\tDigite uma opcao: ";
        cin >> opcao;
        cout << endl;

        if(opcao == 2)
            return 0;
        else if(opcao == 1)
        {
            cout << "\tDigite um numero: ";
            cin >> num;
            try
            {
                testa.validaNumero(num);
                cout << "\tNumero validado." << endl;
            }
            catch(ValorAbaixoException ex1)
            {
                ex1.exibeMensagem();
            }
            catch(ValorAcimaException ex2)
            {
                ex2.exibeMensagem();
            }
            catch(ValorMuitoAcimaException ex3)
            {
                ex3.exibeMensagem();
            }
        }
    }

    return 0;
}
