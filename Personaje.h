#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>
/*
 * Clase abstracta Personaje.
 * Define atributos y acciones comunes.
 */
using namespace std;

class Personaje {
protected:
    string nombre;
    int vida;
    int ataque;
    string emocion;
    bool vivo;
    bool guardia;
public:
    Personaje(string n, int v, int a, string e);
/*
 * Metodo abstracto.
 * Debe implementarse en las clases hijas.
 */
    virtual void atacar(Personaje &objetivo)=0;
/*
 * Sobrecarga de curacion.
 * Permite curar una cantidad fija o personalizada.
 */
    void curar();
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
