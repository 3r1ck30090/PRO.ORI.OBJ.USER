#include "Aliado.h"

Aliado::Aliado(string n, int v, int a, string e)
: Personaje(n, v, a, e) {
}

void Aliado::atacar(Personaje &objetivo) {

    cout << nombre << " ataca!\n";

    objetivo.recibirDanio(ataque + 5);
}
