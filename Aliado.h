#ifndef ALIADO_H
#define ALIADO_H

#include "Personaje.h"

class Aliado : public Personaje {

public:
    Aliado(string n, int v, int a, string e);

    void atacar(Personaje &objetivo);
};

#endif
