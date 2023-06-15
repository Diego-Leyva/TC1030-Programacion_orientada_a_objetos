//Codigo de prueba del examen practico

#include "CableAu.hpp"
#include "BtAu.hpp"
#include <iostream>
using namespace std;

void pruebaPolimorfismo(Auriculares* obj) {
    obj->bajarVolumen();
}

int main(int argc, char const *argv[])
{
    cout << "\n***** Pruebas de CableAu\n";
    CableAu alam{2.5,false};
    cout << alam.toString() << endl;
    alam.subirVolumen();
    alam.bajarVolumen();
    alam.bajarVolumen();
    cout << alam.toString() << endl;

    cout << "\n***** Pruebas de auriculares Bluetooth\n";
    BtAu inalam{70};
    cout << inalam.toString() << endl;
    inalam.setFiltro(true);
    inalam.subirVolumen();
    inalam.subirVolumen();
    cout << inalam.toString() << endl;
    inalam.bajarVolumen();
    cout << inalam.toString() << endl;

    cout << "\n***** Pruebas de polimorfismo\n";
    Auriculares *ap;
    ap = &alam;
    ap->bajarVolumen();
    ap->subirVolumen();

    ap = &inalam;
    ap->bajarVolumen();
    ap->subirVolumen();

    //AGREGA DEBAJO DE ESTE COMENTARIO EL CODIGO DE LA PREGUNTA DE PUNTOS EXTRA

    Auriculares* puntosExtra[4] = {new CableAu{2.6,true}, new CableAu{1.1,false}, new BtAu{80}, new BtAu{3}};

    for(auto item : puntosExtra) {
        pruebaPolimorfismo(item);
    }

    return 0;
}