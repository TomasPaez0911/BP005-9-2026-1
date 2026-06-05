#ifndef JUEGO_H
#define JUEGO_H

struct Juego {
    int puntaje;
    int enemigosDestruidos;
    bool terminado;
    bool victoria;
};

void inicializarJuego(Juego* j);
void verificarVictoria(Juego* j, int totalEnemigos);

#endif
