#include "Voo.h"

Voo::Voo()
{
    //ctor
    numero = 1;
    data = Data();
    horario = Horario();

    for(int i = 0; i < 100; i++){
        lugar[i] = 0;
    }
}

Voo::Voo(int n, Data d, Horario h)
{
    //ctor
    numero = n;
    data = d;
    horario = h;

    for(int i = 0; i < 100; i++){
        lugar[i] = 0;
    }
}

int Voo::proximoLivre()
{
    for (int i = 0; i < 100; i++){
        if (!lugar[i])
            return i + 1;
    }
    return 0;
}

bool Voo::verifica(int l)
{
    return lugar[l - 1]; //se estiver ocupada, retornará true
}

bool Voo::ocupa(int l)
{
    if(verifica(l))
        return false;
    else{
        lugar[l - 1] = 1;
        return true;
    }
}

int Voo::vagas()
{
    int total = 0;

    for (int i = 0; i < 100; i++){
        if (!lugar[i]) total++;
    }

    return total;
}

int Voo::getNumVoo()
{
    return numero;
}

Data Voo::getData()
{
    return data;
}

Horario Voo::getHorario()
{
    return horario;
}
