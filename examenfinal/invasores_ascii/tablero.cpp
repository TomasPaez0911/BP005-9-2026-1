#include "tablero.h"
#include <iostream>

void limpiarTablero(char tablero[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            
            if (j == 0 || j == COLUMNAS - 1) {
                tablero[i][j] = '|';
            } else {
                tablero[i][j] = ' ';
            }
        }
    }
}

void mostrarTablero(char tablero[FILAS][COLUMNAS]) {
    // Limpia la terminal en Linux antes de dibujar para que no se amontone
    std::system("clear"); 
    
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            std::cout << tablero[i][j];
        }
        std::cout << "\n";
    }
}
