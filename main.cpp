#include "Combate.h"

int main() {

    Aliado omori("Omori",100,20,"Neutral","Omori");
    
    Aliado aubrey("Aubrey",120,18,"Neutral","Aubrey");

    Aliado kel("Kel",90,15,"Neutral","Kel");

    Aliado hero("Hero",110,12,"Neutral","Hero");

    Aliado equipo[4] = {omori,aubrey,kel,hero};

    Enemigo slime("Slime",200,10,"Neutral");
    
    Combate pelea;

    pelea.iniciarPelea(equipo, 4, slime);
    
    return 0;
}
