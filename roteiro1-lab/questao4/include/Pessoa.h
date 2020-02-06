#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string n, int i, std::string t);

        void setNome(std::string n);
        std::string getNome();

        void setIdade(int i);
        int getIdade();

        void setTelefone(std::string t);
        std::string getTelefone();

    protected:

    private:
        std::string nome, telefone;
        int idade;
};

#endif // PESSOA_H
