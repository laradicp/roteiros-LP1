#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa
{
    public:
        Despesa();
        Despesa(double v, std::string t);

        void setValor(double v);
        double getValor();

        void setTipoDeGasto(std::string t);
        std::string getTipoDeGasto();

    protected:

    private:
        double valor;
        std::string tipoDeGasto;
};

#endif // DESPESA_H
