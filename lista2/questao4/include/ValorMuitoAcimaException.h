#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H
#ifndef STRING
#define STRING
#include <string>
#endif
#ifndef STDEXCEPT
#define STDEXCEPT
#include <stdexcept>
#endif

class ValorMuitoAcimaException : public std::exception
{
    public:
        ValorMuitoAcimaException(int n);
        virtual ~ValorMuitoAcimaException() throw();

        int getLimiteSuperior();

        void exibeMensagem();

    protected:

    private:
        int num;
};

#endif // VALORMUITOACIMAEXCEPTION_H
