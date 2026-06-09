#include "Combate.h"
Combate::Combate() {
    turnos = 1;
    estado = true;
}

void Combate::iniciarPelea(Aliado aliados[],int cantidadAliados,Enemigo &enemigo) {

    while(enemigo.estaVivo()) {

        cout << "\n TURNO " << turnos << " \n";

        for(int i = 0; i < cantidadAliados; i++) {

            if(aliados[i].estaVivo()) {
                aliados[i].atacar(enemigo);
            }

            if(!enemigo.estaVivo()) {
                cout << "\n Ganaste! \n";
                estado = false;
                break;
            }
        }
        turnos++;
    }
}
