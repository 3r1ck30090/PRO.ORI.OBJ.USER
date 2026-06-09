#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>

using namespace std;

class Personaje {
protected:
    string nombre;
    int vida;
    int ataque;
    string emocion;
    bool vivo;

public:
    Personaje(string n, int v, int a, string e);

    virtual void atacar(Personaje &objetivo)=0;

    void curar(int cantidad);

    void activarGuardia();

    void setEmocion(string e);

    string getEmocion();

    void recibirDanio(int danio);

    bool estaVivo();

    string getNombre();

    int getVida();
};

#endif
