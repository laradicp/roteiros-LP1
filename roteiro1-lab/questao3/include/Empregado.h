#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado
{
    public:
        Empregado();
        Empregado(std::string n, std::string sn, double s);

        void setNome(std::string n);
        std::string getNome();

        void setSobrenome(std::string sn);
        std::string getSobrenome();

        void setSalario(double s);
        double getSalario();

    protected:

    private:
        std::string nome, sobrenome;
        double salario;
};

#endif // EMPREGADO_H
