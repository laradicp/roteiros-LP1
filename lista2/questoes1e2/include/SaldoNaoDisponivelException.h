#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#ifndef STRING
#define STRING
#include <string>
#endif
#include <stdexcept>

class SaldoNaoDisponivelException : public std::exception
{
    public:
        SaldoNaoDisponivelException();
        virtual ~SaldoNaoDisponivelException() throw();

        std::string mensagemErro();

    protected:

    private:
};

#endif // SALDONAODISPONIVELEXCEPTION_H
