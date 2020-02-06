#include <iostream>

using namespace std;

typedef struct{
    int jogador;
    int votos;
} tCampeao;

float CalculaPercentual (int votos, int total){
    return (float)votos/total*100;
}

int main(){
    int n, jogador[23] = {0}, total = 0;
    tCampeao campeao = {0, 0};

    cout << "Enquete: Quem foi o melhor jogador da partida?" << endl << endl;
    while(1){
        cout << "\tDigite o numero da camisa do jogador (0 para sair): ";
        cin >> n;

        if (!n) break;
        if (n < 1 || n > 23) {
            cout << "\tDigite um numero de 1 a 23" << endl;
            continue;
        }

        jogador[n - 1]++;
        total++;
    }

    cout << endl << endl << "Resultado da votacao" << endl << endl;

    cout << "\tForam computados " << total << " votos" << endl << endl;

    for (int i = 0; i < 23; i++){
        cout << "\tJogador " << i + 1 << ":\t" << jogador[i] << " votos\t\t" << CalculaPercentual(jogador[i], total) << "%" <<
        endl;
        if (jogador[i] > campeao.votos){
            campeao.jogador = i + 1;
            campeao.votos = jogador[i];
        }
    }

    cout << endl << "\tO melhor jogador foi o de numero " << campeao.jogador << ", com " << campeao.votos <<
    " votos, correspondendo a " << CalculaPercentual(campeao.votos, total) << "%" << endl;

    return 0;
}
