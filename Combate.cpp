#include "Combate.h"
/*
 * Constructor del sistema de combate.
 * Inicializa el estado del combate.
 */
Combate::Combate(){
    turnos = 1;
    estado = true;
}
/*
 * Gestiona los turnos de aliados y enemigo.
 * Hasta que uno de los 2 llegue a 0.
 */
void Combate::iniciarPelea(Aliado aliados[], 
     int cantidadAliados, Enemigo &enemigo){
/*
 * Verifica si aún existen aliados vivos.
 * Si todos han caído, se termina el combate.
 */
    while(enemigo.estaVivo()){
        bool hayVivos = false;
        for(int i = 0; i < cantidadAliados; i++)
        {
        if(aliados[i].estaVivo())
        {
            hayVivos = true;
            break;
        }
    }

    if(!hayVivos)
    {
        cout << "\nTODOS LOS ALIADOS HAN CAIDO...\n";
        break;
    }
        
        cout << "\n TURNO " << turnos << " \n";

        for(int i = 0; i < cantidadAliados; i++){
            
            if(aliados[i].estaVivo()){
                
                cout << "\nTurno de " << aliados[i].getNombre() << endl;

                cout << "Vida: " << aliados[i].getVida() << endl;

                cout << "Emocion: " << aliados[i].getEmocion() << endl;
/*
 * Permite elegir una accion para el aliado.
 */
                cout << "\n1. Atacar\n";
                cout << "2. Guardia\n";
                cout << "3. Habilidad\n";
                cout << "Elige una opcion:\n";
                
                int opcion;
                cin >> opcion;

                switch(opcion){
                    /*
                    * Permite atacar al enemigo.
                    */
                    case 1:

                        aliados[i].atacar(enemigo);

                        break;

                    case 2:
                    /*
                    * Permite protegerse del enemigo.
                    */
                        aliados[i].activarGuardia();

                        break;

                    case 3:
                    /*
                    * Permite activar una habilidad a un aliado.
                    */
                        cout << "\nSelecciona objetivo\n";

                        for(int j = 0; j < cantidadAliados; j++){
                            
                            cout << j + 1
                                 << ". "
                                 << aliados[j].getNombre()
                                 << endl;
                        }

                        int objetivo;

                        cin >> objetivo;

                        aliados[i].habilidad(aliados[objetivo - 1]);

                        break;

                    default:

                        aliados[i].atacar(enemigo);
                }
                    /*
                    * Visualiza si ya no existe ningun enemigo.
                    */
                if(enemigo.estaVivo() == false){
                    
                    cout << "\nGANASTE!\n";

                    estado = false;

                    break;
                }
            }
        }
        /*
        * El enemigo ataca a todos los aliados vivos.
        */
        if(enemigo.estaVivo()){
            
            cout << "\nTurno del enemigo\n";

            for(int i = 0; i < cantidadAliados; i++){
                
                if(aliados[i].estaVivo()){
                    
                    enemigo.atacar(aliados[i]);
                }
            }
        }

        turnos++;
    }
}
