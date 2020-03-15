#ifndef STRING
#define STRING
#include <string>
#endif // STRING

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario
{
    public:
        Funcionario();;
        Funcionario(std::string n, int m);
        virtual ~Funcionario();

        virtual double calculaSalario() = 0;

        void setNome(std::string n);
        std::string getNome();

        void setMatricula(int m);
        int getMatricula();

        //para polimorfismo
        /*virtual void setSalario(double s);

        virtual void setVendasSemanais(double v);
        virtual double getVendasSemanais();

        virtual void setPercentualComissao(double p);
        virtual double getPercentualComissao();

        virtual void setSalarioPorHora(double s);
        virtual double getSalarioPorHora();

        virtual void setHorasTrabalhadas(double h);
        virtual double getHorasTrabalhadas();
        */

    protected:
        std::string nome;
        int matricula;

        //para polimorfismo
        /*double salario;
        double vendasSemanais, percentualComissao;
        double salarioPorHora, horasTrabalhadas;
        */

    private:
};

#endif // FUNCIONARIO_H
