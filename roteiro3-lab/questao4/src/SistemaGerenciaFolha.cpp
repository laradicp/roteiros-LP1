#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    //ctor
    orcamentoMaximo = 50000;
}

SistemaGerenciaFolha::~SistemaGerenciaFolha()
{
    //dtor
    /*
    int tamanho = funcionarios.size();
    for (int i = 0; i < tamanho; i++)
    {
        delete funcionarios[0];
    }
    */
}

void SistemaGerenciaFolha::setFuncionario(Funcionario *f)
{
    funcionarios.push_back(f);
}

double SistemaGerenciaFolha::calculaTotalFolha()
{
    double total = 0;
    int tamanho = funcionarios.size();
    for (int i = 0; i < tamanho; i++)
    {
        if (total > orcamentoMaximo)
        {
            OrcamentoEstouradoException ex = OrcamentoEstouradoException(orcamentoMaximo);
            throw ex;
        }
        total += funcionarios[i]->calculaSalario();
    }
    return total;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string n)
{
    int tamanho = funcionarios.size();
    for (int i = 0; i < tamanho; i++)
    {
        if (funcionarios[i]->getNome() == n)
        {
            return funcionarios[i]->calculaSalario();
        }
    }
    FuncionarioNaoExisteException ex = FuncionarioNaoExisteException(n);
    throw ex;
}
