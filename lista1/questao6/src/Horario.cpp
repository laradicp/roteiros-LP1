#include "Horario.h"

Horario::Horario()
{
    //ctor
    hora = 0;
    minuto = 0;
    segundo = 0;
}

Horario::Horario(int h, int m, int s)
{
    if ((h >= 0)&&(h <= 23)&&(m >= 0)&&(m <= 59)&&(s >= 0)&&(s <= 59)){
        hora = h;
        minuto = m;
        segundo = s;
    }
    else
        Horario();
}

void Horario::setHorario(int h, int m, int s)
{
    if ((h >= 0)&&(h <= 23)&&(m >= 0)&&(m <= 59)&&(s >= 0)&&(s <= 59)){
        hora = h;
        minuto = m;
        segundo = s;
    }
    else
        Horario();
}

void Horario::setHora(int h)
{
    if ((h >= 0)&&(h <= 23))
        hora = h;
    else
        hora = 0;
}
int Horario::getHora()
{
    return hora;
}

void Horario::setMinuto(int m)
{
    if ((m >= 0)&&(m <= 59))
        minuto = m;
    else
        minuto = 0;
}
int Horario::getMinuto()
{
    return minuto;
}

void Horario::setSegundo(int s)
{
    if ((s >= 0)&&(s <= 59))
        segundo = s;
    else
        segundo = 0;
}
int Horario::getSegundo()
{
    return segundo;
}

void Horario::avancarHorario()
{
    segundo++;

    if (segundo == 60){
       segundo = 0;
       minuto++;

       if (minuto == 60){
          minuto = 0;
          hora++;

          if (hora == 24){
             hora = 0;
          }
       }
    }
}
