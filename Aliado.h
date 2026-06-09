#ifndef ALIADO_H
#define ALIADO_H

#include "Personaje.h"

class Aliado : public Personaje {

private:
    string tipo;

public:
    Aliado(string n, int v, int a, string e, string t);

    void atacar(Personaje &objetivo);

    void habilidad(Personaje &objetivo);

};

#endif
