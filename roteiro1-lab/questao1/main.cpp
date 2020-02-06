#include <stdio.h>
#include "Data.h"

void ApresentaMenuInicial()
{
    puts("=========================================================================================");
    puts("\t(1) Data atual");
    puts("\t(2) Data de compromisso");
    puts("\t(3) Sair");
    puts("=========================================================================================");
}

void ApresentaMenuData()
{
    puts("=========================================================================================");
    puts("\t(1) Editar data");
    puts("\t(2) Avancar um dia");
    puts("\t(3) Voltar para menu inicial");
    puts("=========================================================================================");
}

int main()
{
    Data atual = Data();
    Data compromisso = Data();
    int d, m, a;

    while(1)
    {
        ApresentaMenuInicial();

        printf("\tDigite o numero da data desejada:\t");
        int m;
        scanf("%d", &m);

        if(m == 3) break;
        if(m == 1)
            while(1)
            {
                printf("\tData atual: %d/%d/%d\n", atual.dia, atual.mes, atual.ano);

                ApresentaMenuData();

                printf("\tDigite o numero da tarefa desejada:\t");
                int n;
                scanf("%d", &n);

                if(n == 1)
                {
                    printf("\tDigite a nova data (DD/MM/AAAA):\t");
                    scanf("%d/%d/%d", &d, &m, &a);

                    atual = Data(d, m, a);
                }

                else if(n == 2)
                    atual.AvancarDia();

                else if(n == 3)
                    break;

                else puts("\tErro: numero invalido");
            }
        else if(m == 2)
            while(1)
            {
                printf("\tData do compromisso: %d/%d/%d\n", compromisso.dia, compromisso.mes, compromisso.ano);

                ApresentaMenuData();

                printf("\tDigite o numero da tarefa desejada:\t");
                int n;
                scanf("%d", &n);

                if(n == 1)
                {
                    printf("\tDigite a nova data (DD/MM/AAAA):\t");
                    scanf("%d/%d/%d", &d, &m, &a);

                    compromisso = Data(d, m, a);
                }

                else if(n == 2)
                    compromisso.AvancarDia();

                else if(n == 3)
                    break;

                else puts("\tErro: numero invalido");
            }
        else puts("\tErro: numero invalido");
    }

    return 0;
}
