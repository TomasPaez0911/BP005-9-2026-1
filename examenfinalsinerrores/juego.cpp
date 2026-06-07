#include "juego.h"
#include <iostream>

void inicializarJuego(Juego* j) {
    if (j != nullptr) {
        j->puntaje = 0;
        j->enemigosDestruidos = 0;
        j->terminado = false;
        j->victoria = false;
    }
}

void verificarVictoria(Juego* j, int totalEnemigos) {
    if (j != nullptr) {
       if (j->enemigosDestruidos >= totalEnemigos) { 
            j->victoria = true;
            j->terminado = true;
        }
    }
}
