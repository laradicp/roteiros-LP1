#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>

class Trabalhador
{
    public:
        Trabalhador();

        void setNome(std::string n);
        std::string getNome();

    protected:
        std::string nome;
        double salario;

    private:
};

#endif // TRABALHADOR_H
