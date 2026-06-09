#ifndef ENEMIGO_H
#define ENEMIGO_H

#include "Personaje.h"

class Enemigo : public Personaje {

public:
    Enemigo(string n, int v, int a, string e);

    void atacar(Personaje &objetivo);
};

#endif
