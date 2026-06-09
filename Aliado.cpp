#include "Aliado.h"

Aliado::Aliado(string n, int v, int a, string e, string t)
: Personaje(n, v, a, e)
{
    tipo = t;
}

void Aliado::atacar(Personaje &objetivo)
{
    cout << nombre << " ataca!\n";

    objetivo.recibirDanio(ataque + 5);
}

void Aliado::habilidad(Personaje &objetivo)
{
    if(tipo == "Omori")
    {
        objetivo.setEmocion("Triste");

        cout << objetivo.getNombre()
             << " ahora esta Triste.\n";
    }

    else if(tipo == "Aubrey")
    {
        objetivo.setEmocion("Feliz");

        cout << objetivo.getNombre()
             << " ahora esta Feliz.\n";
    }

    else if(tipo == "Kel")
    {
        objetivo.setEmocion("Enojado");

        cout << objetivo.getNombre()
             << " ahora esta Enojado.\n";
    }

    else if(tipo == "Hero")
    {
        objetivo.curar(25);
    }
}
