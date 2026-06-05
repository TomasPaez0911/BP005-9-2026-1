#include "entidades.h"
#include "tablero.h"
#include <iostream>

void inicializarNave(Nave* n) {
    if (n != nullptr) { 
        n->fila = FILAS - 2; 
        n->columna = COLUMNAS / 2; // En el centro
        n->vidas = 3;
    }
}

void moverNave(Nave* n, char dir) {
    if (n == nullptr) return;
    if (dir == 'a' && n->columna > 1) n->columna--; 
    if (dir == 'd' && n->columna < COLUMNAS - 2) n->columna++;

void inicializarBalas(Bala balas[], int tam) {
    for (int i = 0; i < tam; i++) {
        balas[i].activa = false; 
    }
}

void dispararBala(Bala balas[], int tam, Nave* n) {
    if (n == nullptr) return;
    
    for (int i = 0; i < tam; i++) {
        if (!balas[i].activa) {
            balas[i].fila = n->fila - 1; // Sale arriba de la nave
            balas[i].columna = n->columna;
            balas[i].activa = true;
            break; // Solo dispara una por botón
        }
    }
}

void actualizarBalas(Bala balas[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (balas[i].activa) {
            balas[i].fila--; // Suben por el mapa
            if (balas[i].fila < 0) {
                balas[i].activa = false; 
            }
        }
    }
}

void inicializarEnemigos(Enemigo enemigos[], int tam) {
    int colMax = COLUMNAS - 2;
    for (int i = 0; i < tam; i++) {
        enemigos[i].fila = 1 + (i / 5); // Los acomoda en filas de a 5
        enemigos[i].columna = 2 + (i % 5) * 3;
        enemigos[i].vivo = true;
    }
}

void detectarColisiones(Bala balas[], int tamB, Enemigo enemigos[], int tamE, Juego* j) {
    if (j == nullptr) return;
    
    for (int i = 0; i < tamB; i++) {
        if (!balas[i].activa) continue;
        
        for (int k = 0; k < tamE; k++) {
            if (!enemigos[k].vivo) continue;
            
            
            if (balas[i].fila == enemigos[k].fila && balas[i].columna == enemigos[k].columna) {
                balas[i].activa = false;
                enemigos[k].vivo = false; 
                j->puntaje += 10;
                j->enemigosDestruidos++;
            }
        }
    }
}
