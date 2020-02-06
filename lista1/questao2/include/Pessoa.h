#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"

class Pessoa
{
    public:
        Pessoa(std::string n);
        Pessoa(std::string n, Endereco e, std::string t);

        void setNome(std::string n);
        std::string getNome();

        void setEndereco(Endereco e);
        std::string getEndereco();

        void setTelefone(std::string t);
        std::string getTelefone();

    protected:

    private:
        std::string nome;
        Endereco endereco;
        std::string telefone;
};

#endif // PESSOA_H
