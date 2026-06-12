#ifndef COMBATE_H
#define COMBATE_H

#include "Aliado.h"
#include "Enemigo.h"

class Combate {

private:
    int turnos;
    bool estado;

public:
    Combate();
    /*
     * Ejecuta el sistema completo de combate por turnos
     */
    void iniciarPelea(Aliado aliados[],int cantidadAliados,Enemigo &enemigo);

};

#endif
