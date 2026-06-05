#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "juego.h" // Necesario para el estado del juego

struct Nave {
    int fila;
    int columna;
    int vidas; [span_9](start_span)//[span_9](end_span)
};

struct Bala {
    int fila;
    int columna;
    bool activa; [span_10](start_span)//[span_10](end_span)
};

struct Enemigo {
    int fila;
    int columna;
    bool vivo; [span_11](start_span)//[span_11](end_span)
};

[span_12](start_span)// Declaramos funciones usando punteros (* obligatorio)[span_12](end_span)
void inicializarNave(Nave* n);
void moverNave(Nave* n, char dir);
void inicializarBalas(Bala balas[], int tam);
void dispararBala(Bala balas[], int tam, Nave* n);
void actualizarBalas(Bala balas[], int tam);
void inicializarEnemigos(Enemigo enemigos[], int tam);
void detectarColisiones(Bala balas[], int tamB, Enemigo enemigos[], int tamE, Juego* j);

#endif
