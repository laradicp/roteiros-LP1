#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include <Conta.h>

class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        ContaEspecial(std::string nCliente, double sMensal, double s, int nConta);
        virtual ~ContaEspecial();

        void definirLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H
