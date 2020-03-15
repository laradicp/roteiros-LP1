#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
    nome = "";
    matricula = 0;
}

Funcionario::Funcionario(std::string n, int m)
{
    //ctor
    nome = n;
    matricula = m;
}

Funcionario::~Funcionario()
{
    //dtor
}

void Funcionario::setNome(std::string n)
{
    nome = n;
}
std::string Funcionario::getNome()
{
    return nome;
}

void Funcionario::setMatricula(int m)
{
    matricula = m;
}
int Funcionario::getMatricula()
{
    return matricula;
}

//para polimorfismo
/*void Funcionario::setSalario(double s){}

void Funcionario::setVendasSemanais(double v){}
double Funcionario::getVendasSemanais(){return 0;}

void Funcionario::setPercentualComissao(double p){}
double Funcionario::getPercentualComissao(){return 0;}

void Funcionario::setSalarioPorHora(double s){}
double Funcionario::getSalarioPorHora(){return 0;}

void Funcionario::setHorasTrabalhadas(double h){}
double Funcionario::getHorasTrabalhadas(){return 0;}
*/
