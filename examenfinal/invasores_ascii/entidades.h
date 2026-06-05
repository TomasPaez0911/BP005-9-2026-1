#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "juego.h" // Necesario para el estado del juego

struct Nave {
    int fila;
    int columna;
    int vidas; 
};

struct Bala {
    int fila;
    int columna;
    bool activa; 
};

struct Enemigo {
    int fila;
    int columna;
    bool vivo; 
};


void inicializarNave(Nave* n);
void moverNave(Nave* n, char dir);
void inicializarBalas(Bala balas[], int tam);
void dispararBala(Bala balas[], int tam, Nave* n);
void actualizarBalas(Bala balas[], int tam);
void inicializarEnemigos(Enemigo enemigos[], int tam);
void detectarColisiones(Bala balas[], int tamB, Enemigo enemigos[], int tamE, Juego* j);

#endif
