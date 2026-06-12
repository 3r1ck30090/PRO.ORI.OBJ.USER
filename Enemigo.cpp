#include "Enemigo.h"
/*
* Constructor del enemigo.
 * Enemigo con sus atributos.
 */
Enemigo::Enemigo(string n, int v, int a, string e)
: Personaje(n, v, a, e) {
}
/*
 * Ataca con un danio mayor al de los aliados.
 */
void Enemigo::atacar(Personaje &objetivo) {

    cout << nombre << " ataca agresivamente nojao >:( !\n";

    objetivo.recibirDanio(ataque + 10);
}
