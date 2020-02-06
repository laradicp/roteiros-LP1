#ifndef DATA_H
#define DATA_H
#include <string>

class Data
{
    public:
        Data();

        Data(int d, int m, int a);

        int compara(Data d);

        std::string getMesExtenso();

        bool isBissexto();

        void setDia(int d);
        int getDia();

        void setMes(int m);
        int getMes();

        void setAno(int a);
        int getAno();

    private:
        int dia, mes, ano;
};

#endif // DATA_H
