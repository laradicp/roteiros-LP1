#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H
#ifndef STRING
#define STRING
#include <string>
#endif
#ifndef STDEXCEPT
#define STDEXCEPT
#include <stdexcept>
#endif

class ValorAcimaException : public std::exception
{
    public:
        ValorAcimaException(int n);
        virtual ~ValorAcimaException() throw();

        int getLimiteSuperior();

        void exibeMensagem();

    protected:

    private:
        int num;
};

#endif // VALORACIMAEXCEPTION_H
