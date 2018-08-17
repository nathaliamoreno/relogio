#include <iostream>
#include "Relogio.h"


using namespace std;

int main()
{
    relogio rel;
    rel.setHorario(23, 59 ,59);


    cout << " Hora inicial:\n " << rel.getHora() << "h " << rel.getMinuto() << "min " << rel.getSegundo() << "seg" << endl;
    rel.avancarHorario();
    cout << " " << endl;
    cout << " Proximo segundo:\n " << rel.getHora() << "h " << rel.getMinuto() << "min " << rel.getSegundo() << "seg" <<endl;

    return 0;
}
