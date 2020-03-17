#ifndef EXCEPTION
#define EXCEPTION
#include <iostream>
#include <stdexcept>
#endif // EXCEPTION

#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H

class OrcamentoEstouradoException : public std::exception
{
    public:
        OrcamentoEstouradoException();
        OrcamentoEstouradoException(double o);
        virtual ~OrcamentoEstouradoException() throw();

        void setOrcamentoMaximo(double o);
        double getOrcamentoMaximo();

        void exibeMensagem();

    protected:

    private:
        double orcamentoMaximo;
};

#endif // ORCAMENTOESTOURADOEXCEPTION_H
