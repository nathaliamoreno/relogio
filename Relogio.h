#ifndef RELOGIO_H
#define RELOGIO_H
#include <iostream>
#include <string.h>

class relogio
{
    private:
        int hora, minuto, segundo;

    public:

        void setHorario(int h, int m, int s);
        int getHora();
        int getMinuto();
        int getSegundo();
        void avancarHorario();

};

#endif // RELOGIO_H
