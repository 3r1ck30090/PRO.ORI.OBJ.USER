#include "Combate.h"

int main() {

    Aliado omori("Omori", 100, 20, "Neutral");
    Aliado aubrey("Aubrey", 120, 18, "Enojada");
    Aliado kel("Kel", 90, 15, "Feliz");
    Aliado hero("Hero", 110, 12, "Triste");

    Aliado equipo[4] = {
        omori,
        aubrey,
        kel,
        hero
    };

    Enemigo slime("Slime", 200, 10, "Neutral");

    Combate pelea;

    pelea.iniciarPelea(equipo, 4, slime);

    return 0;
}
