#include "entidades.h"
#include "tablero.h"
#include <iostream>

void inicializarNave(Nave* n) {
    [span_15](start_span)if (n != nullptr) { // Verificación obligatoria[span_15](end_span)
        n->fila = FILAS - 2; [span_16](start_span)// Penúltima fila[span_16](end_span)
        n->columna = COLUMNAS / 2; // En el centro
        n->vidas = 3;
    }
}

void moverNave(Nave* n, char dir) {
    if (n == nullptr) return;
    if (dir == 'a' && n->columna > 1) n->columna--; [span_17](start_span)[span_18](start_span)// Izquierda con tope[span_17](end_span)[span_18](end_span)
    if (dir == 'd' && n->columna < COLUMNAS - 2) n->columna++; [span_19](start_span)[span_20](start_span)// Derecha con tope[span_19](end_span)[span_20](end_span)
}

void inicializarBalas(Bala balas[], int tam) {
    for (int i = 0; i < tam; i++) {
        balas[i].activa = false; [span_21](start_span)// Todas empiezan apagadas[span_21](end_span)
    }
}

void dispararBala(Bala balas[], int tam, Nave* n) {
    if (n == nullptr) return;
    [span_22](start_span)// Buscamos la primera bala libre en el arreglo para activarla[span_22](end_span)
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
                balas[i].activa = false; [span_23](start_span)// Se apaga si sale del mapa[span_23](end_span)
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
            
            [span_24](start_span)// Si coinciden en la misma coordenada[span_24](end_span)
            if (balas[i].fila == enemigos[k].fila && balas[i].columna == enemigos[k].columna) {
                balas[i].activa = false; [span_25](start_span)// Desactiva bala[span_25](end_span)
                enemigos[k].vivo = false; [span_26](start_span)// Mata enemigo[span_26](end_span)
                j->puntaje += 10; [span_27](start_span)// Suma puntos[span_27](end_span)
                j->enemigosDestruidos++; [span_28](start_span)// Cuenta la baja[span_28](end_span)
            }
        }
    }
}
