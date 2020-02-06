#include <iostream>

using namespace std;

int main(){
    int n, maiorN = 0;

    cout << "Digite um conjunto de numeros (0 para finalizar): ";
    do{
        cin >> n;
        maiorN = n > maiorN? n : maiorN;
    } while (n);

    cout << "Maior numero: " << maiorN << endl;

    return 0;
}
