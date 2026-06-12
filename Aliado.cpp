#include "Aliado.h"
/*
 * Constructor de la clase Aliado
 * Inicializa los atributos heredados de Personaje
 * y asigna el tipo específico del aliado (Omori, Aubrey y asi)
 */
Aliado::Aliado(string n, int v, int a, string e, string t)
: Personaje(n, v, a, e)
{
    tipo = t;
}
/*
 * Ejecuta un ataque básico al objetivo
 * Realiza un ataque con danio aumentado.
 */
void Aliado::atacar(Personaje &objetivo)
{
    cout << nombre << " ataca!\n";

    objetivo.recibirDanio(ataque + 5);
}
/*
 * Ejecuta la habilidad especial del personaje.
 * Como curar o emocionarse.
 */
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
