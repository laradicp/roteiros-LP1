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

    protected:
        std::string nome;
        int matricula;

    private:
};

#endif // FUNCIONARIO_H
