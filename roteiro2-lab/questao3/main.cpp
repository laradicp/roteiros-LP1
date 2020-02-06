#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario vendedor = Funcionario(123, "Joao Assis", 3000);
    Consultor consultor = Consultor(234, "Alberto Lins", 3000);

    cout << "Vendedor" << endl << "\tMatricula: " << vendedor.getMatricula() << endl << "\tNome: " << vendedor.getNome() << endl
    << "\tSalario: " << vendedor.getSalario() << endl;

    cout << endl << "Consultor" << endl << "\tMatricula: " << consultor.getMatricula() << endl << "\tNome: " << consultor.getNome()
    << endl << "\tSalario: " << consultor.getSalario() << endl << "\tSalario com bonus percentual de 5%: " <<
    consultor.getSalario(5) << endl;

    return 0;
}
