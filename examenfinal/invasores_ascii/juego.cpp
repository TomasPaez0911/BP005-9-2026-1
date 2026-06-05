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
        [span_31](start_span)if (j->enemigosDestruidos >= totalEnemigos) { //[span_31](end_span)
            j->victoria = true;
            j->terminado = true;
        }
    }
}
