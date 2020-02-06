#include <iostream>
#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Retangulo.h"
#include "Quadrado.h"
#include "Triangulo.h"

using namespace std;

void ApresentaMenu()
{
    cout << "============================================================================" << endl;
    cout << "\t(1)Circulo" << endl;
    cout << "\t(2)Retangulo" << endl;
    cout << "\t(3)Quadrado" << endl;
    cout << "\t(4)Triangulo" << endl;
    cout << "\t(5)Sair" << endl;
    cout << "============================================================================" << endl;
}

int main()
{
    while(1)
    {
        ApresentaMenu();
        cout << "\tDigite um numero: ";
        int n;
        double v1, v2;
        Circulo circulo;
        Retangulo retangulo;
        Quadrado quadrado;
        Triangulo triangulo;
        cin >> n;

        if(n == 5) break;

        switch(n)
        {
            case 1:
                cout << endl << "\tDigite o valor do raio: ";
                cin >> v1;
                circulo = Circulo(v1);
                cout << endl << "\tArea do " << circulo.getNome() << ": " << circulo.calcularArea() << endl;
                break;

            case 2:
                cout << endl << "\tDigite o valor da base: ";
                cin >> v1;
                cout << endl << "\tDigite o valor da altura: ";
                cin >> v2;
                retangulo = Retangulo(v1, v2);
                cout << endl << "\tArea do " << retangulo.getNome() << ": " << retangulo.calcularArea() << endl;
                break;

            case 3:
                cout << endl << "\tDigite o valor do lado: ";
                cin >> v1;
                quadrado = Quadrado(v1);
                cout << endl << "\tArea do " << quadrado.getNome() << ": " << quadrado.calcularArea() << endl;
                break;

            case 4:
                cout << endl << "\tDigite o valor da base: ";
                cin >> v1;
                cout << endl << "\tDigite o valor da altura: ";
                cin >> v2;
                triangulo = Triangulo(v1, v2);
                cout << endl << "\tArea do " << triangulo.getNome() << ": " << triangulo.calcularArea() << endl;
        }
    }

    return 0;
}
