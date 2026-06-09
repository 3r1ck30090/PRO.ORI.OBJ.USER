#include "Personaje.h"

Personaje::Personaje(string n, int v, int a, string e) {
    nombre = n;
    vida = v;
    ataque = a;
    emocion = e;
    vivo = true;
    guardia = false;
}

void Personaje::recibirDanio(int danio)
{
    if(guardia)
    {
        danio /= 2;

        cout << nombre << " bloquea parte del dano!\n";

        guardia = false;
    }

    vida -= danio;

    cout << nombre << " recibe "<< danio << endl;

    if(vida <= 0)
    {
        vida = 0;
        vivo = false;

        cout << nombre << " fue abatido.\n";
    }
}

bool Personaje::estaVivo() {
    return vivo;
}

string Personaje::getNombre() {
    return nombre;
}

int Personaje::getVida() {
    return vida;
}

void Personaje::curar(int cantidad)
{
    vida += cantidad;

    cout << nombre << " recupera " << cantidad << " HP.\n" << endl;
}

void Personaje::activarGuardia()
{
    guardia = true;

    cout << nombre << " se pone en guardia.\n";
}

void Personaje::setEmocion(string e)
{
    emocion = e;
}

string Personaje::getEmocion()
{
    return emocion;
}
