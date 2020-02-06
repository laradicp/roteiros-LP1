#ifndef VOO_H
#define VOO_H

#include "Horario.h"
#include "Data.h"

class Voo
{
    public:
        Voo();

        Voo(int n, Data d, Horario h);

        int proximoLivre();

        bool ocupa(int l);

        int vagas();

        int getNumVoo();

        Data getData();

        Horario getHorario();

    protected:

    private:
        int numero, lugar[100];
        Data data;
        Horario horario;

        bool verifica(int l);
};

#endif // VOO_H
