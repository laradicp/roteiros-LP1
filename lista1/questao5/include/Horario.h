#ifndef HORARIO_H
#define HORARIO_H

class Horario
{
    public:
        Horario();

        Horario(int h, int m, int s);

        void setHorario(int h, int m, int s);

        void setHora(int h);
        int getHora();

        void setMinuto(int m);
        int getMinuto();

        void setSegundo(int s);
        int getSegundo();

        void avancarHorario();

    protected:

    private:
        int hora, minuto, segundo;
};

#endif // HORARIO_H
