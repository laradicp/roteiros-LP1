#include "Consultor.h"

Consultor::Consultor()
{
    //ctor
    matricula = 0;
    nome = "Nao identificado";
    salario = 0;
}

Consultor::Consultor(int m, std::string n, float s)
{
    //ctor
    setMatricula(m);
    setNome(n);
    setSalario(s);
}

float Consultor::getSalario()
{
    return 1.1*salario;
}

float Consultor::getSalario(float percentual)
{
    return (1.1 + percentual/100)*salario;
    /*Ponto percentual é a diferença, em valores absolutos, entre duas porcentagens
    Fonte: https://www12.senado.leg.br/manualdecomunicacao/redacao-e-estilo/estilo/porcentagem-ponto-percentual*/
}
