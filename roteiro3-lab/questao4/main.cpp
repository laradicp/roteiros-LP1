#include "SistemaGerenciaFolha.h"

using namespace std;

void ApresentaMenu()
{
    cout << "==========================================================================" << endl;
    cout << "\t\t[1] Cadastrar funcionario" << endl;
    cout << "\t\t[2] Consultar salario de funcionario" << endl;
    cout << "\t\t[3] Calcular orcamento total" << endl;
    cout << "\t\t[4] Sair" << endl;
    cout << "==========================================================================" << endl;
}

void ApresentaTiposDeFuncionario()
{
    cout << "==========================================================================" << endl;
    cout << "\t\t[1] Assalariado" << endl;
    cout << "\t\t[2] Horista" << endl;
    cout << "\t\t[3] Comissionado" << endl;
    cout << "==========================================================================" << endl;
}

Assalariado* CadastraAssalariado(Assalariado* assalariado)
{
    string n;
    int m;
    double s;

    cout << "\t\tNome: ";
    cin >> n;
    assalariado->setNome(n);
    cout << "\t\tMatricula: ";
    cin >> m;
    assalariado->setMatricula(m);
    cout << "\t\tSalario (R$): ";
    cin >> s;
    assalariado->setSalario(s);

    return assalariado;
}

Horista* CadastraHorista(Horista* horista)
{
    string n;
    int m;
    double s, h;

    cout << "\t\tNome: ";
    cin >> n;
    horista->setNome(n);
    cout << "\t\tMatricula: ";
    cin >> m;
    horista->setMatricula(m);
    cout << "\t\tSalario por hora (R$): ";
    cin >> s;
    horista->setSalarioPorHora(s);
    cout << "\t\tHoras trabalhadas (h): ";
    cin >> h;
    horista->setHorasTrabalhadas(h);

    return horista;
}

Comissionado* CadastraComissionado(Comissionado* comissionado)
{
    string n;
    int m;
    double p, v;

    cout << "\t\tNome: ";
    cin >> n;
    comissionado->setNome(n);
    cout << "\t\tMatricula: ";
    cin >> m;
    comissionado->setMatricula(m);
    cout << "\t\tPercentual da comissao (%): ";
    cin >> p;
    comissionado->setPercentualComissao(p);
    cout << "\t\tVendas semanais (R$): ";
    cin >> v;
    comissionado->setVendasSemanais(v);

    return comissionado;
}

int main()
{
    int opcao, tipo;
    SistemaGerenciaFolha sistema = SistemaGerenciaFolha();
    string n;

    while(1)
    {
        ApresentaMenu();
        cout << "\t\tDigite uma opcao: ";
        cin >> opcao;

        switch(opcao)
        {
            case 1:
                ApresentaTiposDeFuncionario();
                cout << "\t\tDigite o tipo de funcionario: ";
                cin >> tipo;
                cout << endl;

                switch(tipo)
                {
                    case 1:
                        sistema.setFuncionario(CadastraAssalariado(new Assalariado()));
                        break;

                    case 2:
                        sistema.setFuncionario(CadastraHorista(new Horista()));
                        break;

                    case 3:
                        sistema.setFuncionario(CadastraComissionado(new Comissionado()));
                        break;
                }
                break;

            case 2:
                cout << endl << "\t\tDigite o nome do funcionario: ";
                cin >> n;
                cout << endl;
                try {
                    sistema.consultaSalarioFuncionario(n);
                    cout << "\t\tSalario de " << n << ": R$" << sistema.consultaSalarioFuncionario(n) << endl;
                }
                catch (FuncionarioNaoExisteException ex)
                {
                    ex.exibeMensagem();
                }
                break;

            case 3:
                cout << endl;
                try {
                    sistema.calculaTotalFolha();
                    cout << "\t\tTotal: R$" << sistema.calculaTotalFolha() << endl;
                }
                catch (OrcamentoEstouradoException ex)
                {
                    ex.exibeMensagem();
                }
                break;

            case 4:
                return 0;
        }
    }
    return 0;
}
