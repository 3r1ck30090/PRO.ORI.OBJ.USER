#include "Combate.h"

Combate::Combate(){
    turnos = 1;
    estado = true;
}

void Combate::iniciarPelea(Aliado aliados[], int cantidadAliados, Enemigo &enemigo){
    
    while(enemigo.estaVivo()){
        
        cout << "\n TURNO " << turnos << " \n";

        for(int i = 0; i < cantidadAliados; i++){
            
            if(aliados[i].estaVivo()){
                
                cout << "\nTurno de " << aliados[i].getNombre() << endl;

                cout << "Vida: " << aliados[i].getVida() << endl;

                cout << "Emocion: " << aliados[i].getEmocion() << endl;

                cout << "\n1. Atacar\n";
                cout << "2. Guardia\n";
                cout << "3. Habilidad\n";

                int opcion;
                cin >> opcion;

                switch(opcion){
                    
                    case 1:

                        aliados[i].atacar(enemigo);

                        break;

                    case 2:

                        aliados[i].activarGuardia();

                        break;

                    case 3:

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

                if(enemigo.estaVivo() == false){
                    
                    cout << "\nGANASTE!\n";

                    estado = false;

                    break;
                }
            }
        }
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
