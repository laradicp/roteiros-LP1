#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main()
{
    TrabalhadorAssalariado cozinheiro = TrabalhadorAssalariado("Joao da Silva", 998);
    TrabalhadorPorHora faxineira = TrabalhadorPorHora("Maria de Souza", 50);

    faxineira.calcularPagamentoSemanal(45);

    cout << "Salario mensal de " << cozinheiro.getNome() << ": " << cozinheiro.getSalarioMensal() << endl;
    cout << "Salario semanal de " << faxineira.getNome() << ": " << faxineira.getSalarioSemanal() << endl;

    cozinheiro.setSalario(1500);
    cout << endl << "Novo salario mensal de " << cozinheiro.getNome() << ": " << cozinheiro.getSalarioMensal() << endl;
    cout << "Novo salario semanal de " << cozinheiro.getNome() << ": " << cozinheiro.getSalarioSemanal() << endl;

    return 0;
}
