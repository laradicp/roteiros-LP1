#include "Horario.h"
#include <iostream>
#include <time.h>

using namespace std;

void delay()
{
    unsigned int inicio = time(NULL);
    unsigned int fim = time(NULL);

    while (fim - inicio < 1)
        fim = time(NULL);
}

int main()
{
    Horario atual = Horario();
    int h, m, s, n;

    while (1){
        cout << "Horario atual: " << atual.getHora() << "h" << atual.getMinuto() << "min" << atual.getSegundo() << "s" << endl << endl;

        cout << "(1)Editar horario atual\n(2)Editar hora atual\n(3)Editar minuto atual\n(4)Editar segundo atual\n" <<
        "(5)Ir para relogio\n(6)Sair" << endl << endl;

        cout << "Digite o numero: ";
        cin >> n;

        if (n == 6) break;

        switch(n){
            case 1:
                cout << "Digite a hora atual (HH): ";
                cin >> h;
                cout << "Digite o minuto atual (MM): ";
                cin >> m;
                cout << "Digite o segundo atual (SS): ";
                cin >> s;

                atual.setHorario(h, m, s);

                break;

            case 2:
                cout << "Digite a hora atual (HH): ";
                cin >> h;

                atual.setHora(h);

                break;

            case 3:
                cout << "Digite o minuto atual (MM): ";
                cin >> m;

                atual.setMinuto(m);

                break;

            case 4:
                cout << "Digite o segundo atual (SS): ";
                cin >> s;

                atual.setSegundo(s);

                break;

            case 5:
                cout << endl << "Ctrl+C para sair do programa" << endl;
                while (1){
                    delay();
                    atual.avancarHorario();

                    cout << atual.getHora() << "h" << atual.getMinuto() << "min" << atual.getSegundo() << "s" << endl;
                }
        }
    }

    return 0;
}
