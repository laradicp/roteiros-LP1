#include "Data.h"
#include <stdio.h>

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 2019;
}

Data::Data(int d, int m, int a){
    int anoBissexto = (!(a%4)&&(a%100)) || !(a%400 || !(a%100));

    switch(m){
        case 2:
            while(d < 1 || d > 28)
            {
                if(anoBissexto)
                {
                    if(d == 29)
                        break;
                    else
                        puts("\tData invalida. O dia, no mes e no ano selecionados, deve pertencer ao intervalo [1,29]");
                }
                else
                    puts("\tData invalida. O dia, no mes e no ano selecionados, deve pertencer ao intervalo [1,28]");

                printf("\tDigite novamente a data (DD/MM/AAAA):\t");
                scanf("%d/%d/%d", &d, &m, &a);

                anoBissexto = (!(a%4)&&(a%100)) || !(a%400 || !(a%100));
            }
            break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            while(d < 1 || d > 31)
            {
                puts("\tData invalida. O dia, no mes selecionado, deve pertencer ao intervalo [1,31]");

                printf("\tDigite novamente a data (DD/MM/AAAA):\t");
                scanf("%d/%d/%d", &d, &m, &a);
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            while(d < 1 || d > 30)
            {
                puts("\tData invalida. O dia, no mes selecionado, deve pertencer ao intervalo [1,30]");

                printf("\tDigite novamente a data (DD/MM/AAAA):\t");
                scanf("%d/%d/%d", &d, &m, &a);
            }
            break;

        default:
            puts("\tData invalida. O mes deve pertencer ao intervalo [1,12]");

            printf("\tDigite novamente a data (DD/MM/AAAA):\t");
            scanf("%d/%d/%d", &d, &m, &a);
    }

    dia = d;
    mes = m;
    ano = a;
}

void Data::AvancarDia()
{
    int anoBissexto = (!(ano%4)&&(ano%100))||!(ano%400 || !(ano%100));

    switch(mes){
        case 2:
            if (anoBissexto)
            {
                if (dia == 29)
                {
                   dia = 1;
                   mes++;
                }
                else
                    dia++;
            }
            else
            {
                if (dia == 28)
                {
                   dia = 1;
                   mes++;
                }
                else
                    dia++;
            }

            if (mes == 13)
            {
                mes = 1;
                ano++;
            }
            break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (dia == 31)
            {
                dia = 1;
                mes++;
            }
            else
                dia++;

            if (mes == 13)
            {
                mes = 1;
                ano++;
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            if (dia == 30)
            {
                dia = 1;
                mes++;
            }
            else
                dia++;

            if (mes == 13)
            {
                mes = 1;
                ano++;
            }
    }
}
