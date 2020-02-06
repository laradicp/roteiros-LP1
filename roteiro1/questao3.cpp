#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));

    int n;

    while(1){
        cout << "Digite o numero de vezes que o dado devera ser jogado: ";
        cin >> n;
        if (!n) break;

        int dado[6] = {0}, total = 0;

        for (int i = 0; i < n; i++){
            dado[rand()%6]++;
            total++;
        }

        for (int i = 0; i < 6; i++){
            cout << "Face " << i + 1 << ": " << (float)dado[i]/total*100 << "%" << endl;
        }
    }

    return 0;
}
