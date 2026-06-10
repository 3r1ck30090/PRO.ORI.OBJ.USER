# Juego de Combate de Omori

Este proyecto es una simulación sencilla de un combate por turnos
inspirado en Omori. Trata de simular y representar personajes ya sea aliados o enemigos que pueden atacar, usar
habilidades especiales, defenderse y recibir daño.
## Clases

### Personaje
* Atributos: nombre, vida, ataque, emoción, vivo y guardia.
* Métodos: atacar, recibirDaño, curar, activarGuardia,
  setEmocion, getEmocion, getVida y getNombre.
* Es la clase base abstracta del proyecto.

### Aliado
* Hereda de Personaje.
* Atributo adicional: tipo.
* Métodos: atacar y habilidad.
* Representa a los personajes controlados por el jugador.

### Enemigo
* Hereda de Personaje.
* Método: atacar.
* Representa al enemigo del combate.

### Combate
* Atributos: turnos y estado.
* Método: iniciarPelea.
* Controla el flujo completo del combate.


# Funcionamiento del Programa
Al iniciar el programa se crean cuatro aliados:

* Omori
* Aubrey
* Kel
* Hero

También se crea un enemigo llamado Slime.
El combate se desarrolla por turnos. Durante el turno de cada
aliado, el jugador puede elegir una acción.

## Opciones disponibles

### 1. Atacar
El personaje realiza un ataque directo al enemigo.

### 2. Guardia
El personaje se protege y reduce a la mitad del próximo daño
que reciba.

### 3. Habilidad
Cada personaje posee una habilidad especial.

#### Omori
Vuelve triste al objetivo seleccionado.

#### Aubrey
Vuelve feliz al objetivo seleccionado.

#### Kel
Vuelve enojado al objetivo seleccionado.

#### Hero
Cura 25 puntos de vida al objetivo seleccionado.


# Funcionamiento del Enemigo
Después de que todos los aliados realizan su acción, el enemigo
ataca a todos los personajes que continúan vivos (asi era más facil que escojer de forma aleatoria).
El combate termina cuando la vida del enemigo llega a cero.

# Conceptos 
## Herencia
La herencia se implementa mediante las clases derivadas:

```cpp
class Aliado : public Personaje
class Enemigo : public Personaje
```

Estas clases reutilizan los atributos y métodos definidos en
Personaje.

## Encapsulamiento
Los atributos se encuentran protegidos mediante modificadores
de acceso.
```cpp
protected:
    string nombre;
    int vida;
    int ataque;
    string emocion;
    bool vivo;
    bool guardia;
```
El acceso a estos atributos se realiza mediante métodos públicos.

## Clase Abstracta
La clase Personaje es abstracta porque contiene un método virtual
puro.
```cpp
virtual void atacar(Personaje &objetivo)=0;
```
Debido a esto no es posible crear objetos directamente de la
clase Personaje.

## Sobreescritura
Las clases hijas implementan su propia versión del método atacar.
```cpp
void Aliado::atacar(Personaje &objetivo)
```
```cpp
void Enemigo::atacar(Personaje &objetivo)
```
Cada implementación tiene un comportamiento diferente.

## Sobrecarga
El método curar se encuentra sobrecargado.
```cpp
void curar();
void curar(int cantidad);
```
La primera versión cura una cantidad fija y la segunda permite
especificar la cantidad de vida a recuperar.

## Polimorfismo
Se utiliza un apuntador de tipo Personaje para demostrar
polimorfismo.
```cpp
Personaje *personaje;
personaje = &omori;
personaje->atacar(slime);
personaje = &slime;
personaje->atacar(omori);
```
Aunque el apuntador es de tipo Personaje, el método ejecutado
depende del objeto al que apunta en tiempo de ejecución gracias
a la palabra reservada virtual.


# Casos que Podrían Provocar Errores
* Seleccionar un objetivo fuera del rango disponible.
* Introducir valores inválidos en el menú.
* Crear personajes con estadísticas negativas.
* Intentar usar personajes derrotados.
* Introducir datos incorrectos al momento de seleccionar una
  acción.

---
# Diagrama UML


---

# Instrucciones de Compilación
```bash
g++ main.cpp Personaje.cpp Aliado.cpp Enemigo.cpp Combate.cpp -o juego
```
# Instrucciones de Ejecución
## Linux
```bash
./juego
```
## Windows
```bash
.\juego.exe
```
