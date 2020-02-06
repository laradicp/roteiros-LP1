#include "Endereco.h"
#include <stdio.h>
#include <sstream>

Endereco::Endereco()
{
    //ctor
    rua = "Logradouro nao cadastrado";
    numero = 0;
    bairro = "";
    cidade = "";
    estado = "";
    CEP = "";
}

Endereco::Endereco(std::string r, int n, std::string b, std::string c, std::string e, std::string cep)
{
    //ctor
    rua = r;
    numero = n;
    bairro = b;
    cidade = c;
    estado = e;
    CEP = cep;
}

std::string Endereco::toString()
{
    std::stringstream ss;
    ss << numero;
    std::string stringNumero(ss.str());
    return "Rua: " + rua + "\nNumero: " + stringNumero + "\nBairro: " + bairro + "\nCidade: " + cidade + "\nEstado: " + estado + "\nCEP: " + CEP;
}
