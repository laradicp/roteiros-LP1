#ifndef LIMITEULTRAPASSADOEXCEPTION_H
#define LIMITEULTRAPASSADOEXCEPTION_H
#ifndef STRING
#define STRING
#include <string>
#endif
#include <stdexcept>


class LimiteUltrapassadoException : public std::exception
{
    public:
        LimiteUltrapassadoException();
        virtual ~LimiteUltrapassadoException() throw();

        std::string mensagemErro();

    protected:

    private:
};

#endif // LIMITEULTRAPASSADOEXCEPTION_H
