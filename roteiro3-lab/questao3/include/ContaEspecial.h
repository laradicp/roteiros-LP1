#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <ContaCorrente.h>


class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial();
        ContaEspecial(std::string nC, int n, double sr, double sd);
        virtual ~ContaEspecial();

    protected:

    private:
        virtual double definirLimite();
};

#endif // CONTAESPECIAL_H
