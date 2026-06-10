#ifndef ENEMIGO_H
#define ENEMIGO_H

#include "Personaje.h"
/*
 * Clase Enemigo
 * Hereda de Personaje.
 * Representa al enemigo principal del combate.
 */
class Enemigo : public Personaje {

public:
    Enemigo(string n, int v, int a, string e);

    void atacar(Personaje &objetivo);
};

#endif
