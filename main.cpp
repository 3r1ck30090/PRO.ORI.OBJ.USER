/*
 * Proyecto Combate Omori
 * Erick Buendia Urbina / A01715505
 * Programacion Orientada a Objetos
 */
#include "Combate.h"
/*
 * Crea personajes y ejecuta el combate.
 */
int main() {

    Aliado omori("Omori",100,20,"Neutral","Omori");
    
    Aliado aubrey("Aubrey",120,18,"Neutral","Aubrey");

    Aliado kel("Kel",90,15,"Neutral","Kel");

    Aliado hero("Hero",110,12,"Neutral","Hero");

    Aliado equipo[4] = {omori,aubrey,kel,hero};

    Enemigo slime("Slime",200,10,"Neutral");
/*
 * Se crea un apuntador de tipo Personaje para
 * demostrar el uso de polimorfismo.
 */
    Personaje *personaje;
/*
 * El apuntador referencia a Omori (Aliado).
 * Se ejecuta Aliado::atacar().
 */
    personaje = &omori;
    personaje->atacar(slime);
/*
 * El apuntador ahora referencia a Slime (Enemigo).
 * Se ejecuta Enemigo::atacar().
 */
    personaje = &slime;
    personaje->atacar(omori);
    
    Combate pelea;

    pelea.iniciarPelea(equipo, 4, slime);
    
    return 0;
}
