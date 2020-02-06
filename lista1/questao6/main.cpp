#include <iostream>
#include <Voo.h>

using namespace std;

int main()
{
    Data d = Data(17, 12, 2019);
    Horario h = Horario(10, 35, 0);
    Voo jpa_gru = Voo(), lhr_cdg = Voo(2, d, h);
    int n;

    while(1){
        cout << "Digite o numero do seu voo (0 para sair): ";
        cin >> n;

        if (!n) break;

        switch (n){
            case 1:
                cout << endl << "Joao Pessoa -> Guarulhos" << endl;
                cout << "Detalhes do voo:" << endl;
                cout << "\tNumero: " << jpa_gru.getNumVoo() << endl;
                d = jpa_gru.getData();
                cout << "\tData: " << d.getDia() << "/" << d.getMes() << "/" << d.getAno() << endl;
                h = jpa_gru.getHorario();
                cout << "\tHorario: " << h.getHora() << "h" << h.getMinuto() << "min" << h.getSegundo() << "s" << endl << endl;

                cout << jpa_gru.vagas() << " assentos disponiveis" << endl;

                while (1){
                    int l;
                    cout << "Digite o assento desejado (1 a 100): ";
                    cin >> l;

                    if (jpa_gru.ocupa(l)){
                        cout << "Assento reservado com sucesso" << endl;
                        break;
                    }
                    else{
                        cout << "Assento ja ocupado" << endl;
                        cout << "Primeiro assento disponivel: " << jpa_gru.proximoLivre() << endl;
                    }
                }
                break;

            case 2:
                cout << endl << "Londres -> Paris" << endl;
                cout << "Detalhes do voo:" << endl;
                cout << "\tNumero: " << lhr_cdg.getNumVoo() << endl;
                d = lhr_cdg.getData();
                cout << "\tData: " << d.getDia() << "/" << d.getMes() << "/" << d.getAno() << endl;
                h = lhr_cdg.getHorario();
                cout << "\tHorario: " << h.getHora() << "h" << h.getMinuto() << "min" << h.getSegundo() << "s" << endl << endl;

                cout << lhr_cdg.vagas() << " assentos disponiveis" << endl;

                while (1){
                    int l;
                    cout << "Digite o assento desejado (1 a 100): ";
                    cin >> l;

                    if (lhr_cdg.ocupa(l)){
                        cout << "Assento reservado com sucesso" << endl;
                        break;
                    }
                    else{
                        cout << "Assento ja ocupado" << endl;
                        cout << "Primeiro assento disponivel: " << lhr_cdg.proximoLivre() << endl;
                    }
                }
                break;

            default:
                cout << "Voo inexistente" << endl;
        }
        cout << endl;
    }
}
