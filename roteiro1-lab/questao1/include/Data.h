#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        //atributos
        int dia, mes, ano;

        //metodos
        Data();

        Data(int d, int m, int a);

        void AvancarDia();
};

#endif // DATA_H
