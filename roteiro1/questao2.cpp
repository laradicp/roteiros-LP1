#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));

    int n = rand()%101, palpite;

    cout << "Adivinhe o numero entre 0 e 100" << endl;
    while(1){
        cin >> palpite;

        if (palpite > n) cout << "Muito alto. Tente novamente" << endl;
        else if (palpite < n) cout << "Muito baixo. Tente novamente" << endl;
        else break;
    }

    cout << "Parabens. Voce adivinhou o numero" << endl;

    return 0;
}
