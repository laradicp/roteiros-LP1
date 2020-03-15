#ifndef STRING
#define STRING
#include <string>
#endif // STRING

#ifndef EXCEPTION
#define EXCEPTION
#include <iostream>
#include <stdexcept>
#endif // EXCEPTION

#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException();
        FuncionarioNaoExisteException(std::string n);
        virtual ~FuncionarioNaoExisteException() throw();

        void setNome(std::string n);
        std::string getNome();

        void exibeMensagem();

    protected:

    private:
        std::string nome;
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
