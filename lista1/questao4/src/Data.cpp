#include "Data.h"
#include <stdio.h>

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 1;
}

bool Data::isBissexto()
{
    return (!(ano%4)&&(ano%100))||!(ano%400 || !(ano%100));
}

Data::Data(int d, int m, int a)
{
    switch(m){
        case 2:
            if (d < 1 || d > 28){
                if (isBissexto()){
                    if (d != 29){
                        d = 1;
                        m = 1;
                        a = 1;
                    }
                }
                else{
                    d = 0;
                    m = 0;
                    a = 0;
                }
            }
            break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (d < 1 || d > 31){
                d = 1;
                m = 1;
                a = 1;
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            if (d < 1 || d > 30){
                d = 1;
                m = 1;
                a = 1;
            }
            break;

        default:
            d = 1;
            m = 1;
            a = 1;
    }

    dia = d;
    mes = m;
    ano = a;
}

int Data::compara(Data d)
{
    if ((d.dia == this->dia)&&(d.mes == this->mes)&&(d.ano == this->ano))
        return 0;
    else if (d.ano > this->ano || (d.ano == this->ano)&&(d.mes > this->mes) || (d.ano == this->ano)&&(d.mes == this->mes)&&
             (d.dia > this->dia))
        return -1;
    else return 1;
}

std::string Data::getMesExtenso()
{
    switch(mes){
        case 1:
            return "Janeiro";
        case 2:
            return "Fevereiro";
        case 3:
            return "Marco";
        case 4:
            return "Abril";
        case 5:
            return "Maio";
        case 6:
            return "Junho";
        case 7:
            return "Julho";
        case 8:
            return "Agosto";
        case 9:
            return "Setembro";
        case 10:
            return "Outubro";
        case 11:
            return "Novembro";
        case 12:
            return "Dezembro";
    }
}

void Data::setDia(int d)
{
    dia = d;
}
int Data::getDia()
{
    return dia;
}

void Data::setMes(int m)
{
    mes = m;
}
int Data::getMes()
{
    return mes;
}

void Data::setAno(int a)
{
    ano = a;
}
int Data::getAno()
{
    return ano;
}
