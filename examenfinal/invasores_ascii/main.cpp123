#include <iostream>
#include <unistd.h> // Para el delay usleep
#include "tablero.h"
#include "entidades.h"
#include "juego.h"
#include "teclado.h"
#include "memoria.h"

int main() {
    // 1. Crear e inicializar datos fundamentales
    char mapa[FILAS][COLUMNAS];
    Nave jugador;
    Bala listaBalas[20];       
    Enemigo listaEnemigos[10]; 
    Juego estado;

    inicializarNave(&jugador);
    inicializarBalas(listaBalas, 20);
    inicializarEnemigos(listaEnemigos, 10);
    inicializarJuego(&estado);

    configurarTeclado(); 

 
    while (!estado.terminado) {
        // --- A. Leer Teclado ---
        if (tecladoPresionado()) {
            char tecla = leerTecla();
            if (tecla == 'q' || tecla == '9') estado.terminado = true;
            if (tecla == 'a' || tecla == 'd') moverNave(&jugador, tecla);
            if (tecla == 'f') dispararBala(listaBalas, 20, &jugador);
           if (tecla == 'm') { 
                restaurarTeclado(); // Apaga modo directo para dejar usar el Enter normal
                mostrarReporteMemoria();
                configurarTeclado(); // Vuelve a modo juego
            }
        }

        // --- B. Actualizar Lógica ---
        actualizarBalas(listaBalas, 20);
        detectarColisiones(listaBalas, 20, listaEnemigos, 10, &estado);
        verificarVictoria(&estado, 10);

        // --- C. Armar el Tablero en memoria ---
        limpiarTablero(mapa);
        
        mapa[jugador.fila][jugador.columna] = 'X';
        
        // Colocar Balas
        for (int i = 0; i < 20; i++) {
            if (listaBalas[i].activa) {
                mapa[listaBalas[i].fila][listaBalas[i].columna] = '*'; 
            }
        }
        
        )
        for (int i = 0; i < 10; i++) {
            if (listaEnemigos[i].vivo) {
                mapa[listaEnemigos[i].fila][listaEnemigos[i].columna] = '0'; 
            }
        }

        // --- D. Mostrar en Pantalla ---
        mostrarTablero(mapa);
        std::cout << "PUNTAJE: " << estado.puntaje << "   Vidas: " << jugador.vidas << "\n";
        std::cout << "[a/d] Mover | [f] Disparar | [m] Memoria | [9] Salir\n";

        // Ralentiza un poco el juego (aprox 30 FPS)
        usleep(30000); 
    }

    restaurarTeclado(); 

    // Pantalla de finalización
    if (estado.victoria) {
        std::cout << "\n¡FELICIDADES, DESTRUISETE A TODOS LOS INVASORES!\n"; 
    } else {
        std::cout << "\nJuego terminado de forma ordenada.\n"; 
    }

    return 0;
}
