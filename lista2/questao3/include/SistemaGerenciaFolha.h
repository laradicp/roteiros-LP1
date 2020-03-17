#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include <vector>
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();
        virtual ~SistemaGerenciaFolha();

        void setFuncionario(Funcionario *f);

        double calculaTotalFolha();

        double consultaSalarioFuncionario(std::string n);

    protected:

    private:
        std::vector<Funcionario*> funcionarios;
        double orcamentoMaximo;
};

#endif // SISTEMAGERENCIAFOLHA_H
