#include "Personaje.h"
/*
* Constructor base del personaje.
* Inicializa los atributos basicos del personaje.
*/
Personaje::Personaje(string n, int v, int a, string e) {
    nombre = n;
    vida = v;
    ataque = a;
    emocion = e;
    vivo = true;
    guardia = false;
}
/*
* Aplica danio al personaje.
* O reduce la vida del personaje.
* Considera el estado de guardia(menos danio).
*/
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
/*
 * Cura una cantidad fija de vida.
 */
void Personaje::curar()
{
    vida += 10;

    cout << nombre
         << " recupera 10 HP.\n";
}
/*
 * Cura la cantidad indicada por parametro.
 */
void Personaje::curar(int cantidad)
{
    vida += cantidad;

    cout << nombre
         << " recupera "
         << cantidad
         << " HP.\n";
}
/*
 * Activa la guardia para reducir danio recibido.
 */
void Personaje::activarGuardia()
{
    guardia = true;

    cout << nombre << " se pone en guardia.\n";
}
/*
 * Cambia la emocion actual del personaje.
 */
void Personaje::setEmocion(string e)
{
    emocion = e;
}

string Personaje::getEmocion()
{
    return emocion;
}
