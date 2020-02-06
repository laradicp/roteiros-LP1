#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

class Endereco
{
    public:
        Endereco();
        Endereco(std::string r, int n, std::string b, std::string c, std::string e, std::string cep);

        std::string toString();

    protected:

    private:
        std::string rua, bairro, cidade, estado, CEP;
        int numero;
};

#endif // ENDERECO_H
