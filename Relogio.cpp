#include "Relogio.h"

void relogio::setHorario(int h, int m, int s){

    if (s >= 60){

        s -=60;
        m++;
    }
    if (m >= 60){

        m-=60;
        h++;
    }
    if (h>= 24){

        h-=24;
    }
    hora = h;
    minuto = m;
    segundo = s;
}

int relogio::getHora(){
    return hora;
}
int relogio::getMinuto(){
    return minuto;
}
int relogio::getSegundo(){
    return segundo;
}
void relogio::avancarHorario(){

    segundo++;


    if (segundo >= 60){

        segundo -=60;
        minuto++;
    }
    if (minuto >= 60){

        minuto-=60;
        hora++;
    }
    if (hora>= 24){

        hora-=24;
    }
}
