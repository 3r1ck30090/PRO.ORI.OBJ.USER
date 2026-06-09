#include "Personaje.h"

Personaje::Personaje(string n, int v, int a, string e) {
    nombre = n;
    vida = v;
    ataque = a;
    emocion = e;
    vivo = true;
}

void Personaje::recibirDanio(int danio) {
    vida = vida - danio;

    cout << nombre << " recibe " << danio << "\n";

    if (vida <= 0) {
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
