#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
    public:
        Funcionario();
        Funcionario(int m, std::string n, float s);

        void setMatricula(int m);
        int getMatricula();

        void setNome(std::string n);
        std::string getNome();

        void setSalario(float s);
        float getSalario();

    protected:
        int matricula;
        std::string nome;
        float salario;

    private:
};

#endif // FUNCIONARIO_H
