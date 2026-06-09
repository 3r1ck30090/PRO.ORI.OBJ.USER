#include "Enemigo.h"

Enemigo::Enemigo(string n, int v, int a, string e)
: Personaje(n, v, a, e) {
}

void Enemigo::atacar(Personaje &objetivo) {

    cout << nombre << " ataca agresivamente ñojao >:( !\n";

    objetivo.recibirDanio(ataque + 10);
}
