/*
 * Clase Aliado
 * Hereda de Personaje.
 * Representa a los personajes controlados por el jugador.
 */
#ifndef ALIADO_H
#define ALIADO_H

#include "Personaje.h"

class Aliado : public Personaje {

private:
    string tipo;

public:
    Aliado(string n, int v, int a, string e, string t);

    void atacar(Personaje &objetivo);
/*
* Aplica una habilidad especial segun el tipo de aliado.
*/
    void habilidad(Personaje &objetivo);

};

#endif
