#include <iostream>
#include "Endereco.h"
#include "Pessoa.h"

using namespace std;

int main()
{
    Endereco sausalito = Endereco("R. Min. Viveiros de Castro", 127, "Copacabana", "Rio de Janeiro", "RJ", "22021-010");
    Pessoa jose = Pessoa("Jose Paiva"), clara = Pessoa("Clara Pessoa", sausalito, "(21)99999-8888");

    jose.setTelefone("(83)98888-8888");

    cout << "Nome: " << jose.getNome() << endl << "Endereco: " << jose.getEndereco() << endl << "Telefone: " << jose.getTelefone()
    << endl;
    cout << endl << "Nome: " << clara.getNome() << endl << "Endereco: " << clara.getEndereco() << endl << "Telefone: " <<
    clara.getTelefone() << endl;

    return 0;
}
