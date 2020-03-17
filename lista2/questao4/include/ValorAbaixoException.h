#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#ifndef STRING
#define STRING
#include <string>
#endif
#ifndef STDEXCEPT
#define STDEXCEPT
#include <stdexcept>
#endif

class ValorAbaixoException : public std::exception
{
    public:
        ValorAbaixoException(int n);
        virtual ~ValorAbaixoException() throw();

        int getLimiteInferior();

        void exibeMensagem();

    protected:

    private:
        int num;
};

#endif // VALORABAIXOEXCEPTION_H
