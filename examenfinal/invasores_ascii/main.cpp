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
    Bala listaBalas[20];       [span_48](start_span)[span_49](start_span)// Arreglo de estructuras[span_48](end_span)[span_49](end_span)
    Enemigo listaEnemigos[10]; [span_50](start_span)[span_51](start_span)// Arreglo de estructuras[span_50](end_span)[span_51](end_span)
    Juego estado;

    inicializarNave(&jugador); [span_52](start_span)// Mandamos la dirección con & (Puntero)[span_52](end_span)
    inicializarBalas(listaBalas, 20);
    inicializarEnemigos(listaEnemigos, 10);
    inicializarJuego(&estado);

    configurarTeclado(); [span_53](start_span)// Prepara captura directa en terminal[span_53](end_span)

    [span_54](start_span)// Bucle principal[span_54](end_span)
    while (!estado.terminado) {
        // --- A. Leer Teclado ---
        if (tecladoPresionado()) {
            char tecla = leerTecla();
            if (tecla == 'q' || tecla == '9') estado.terminado = true; [span_55](start_span)[span_56](start_span)// Salir[span_55](end_span)[span_56](end_span)
            if (tecla == 'a' || tecla == 'd') moverNave(&jugador, tecla); [span_57](start_span)[span_58](start_span)// Mover[span_57](end_span)[span_58](end_span)
            if (tecla == 'f') dispararBala(listaBalas, 20, &jugador); [span_59](start_span)[span_60](start_span)// Disparar[span_59](end_span)[span_60](end_span)
            [span_61](start_span)[span_62](start_span)if (tecla == 'm') { // Reporte de memoria[span_61](end_span)[span_62](end_span)
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
        
        [span_63](start_span)// Colocar Nave[span_63](end_span)
        mapa[jugador.fila][jugador.columna] = 'X'; [span_64](start_span)//[span_64](end_span)
        
        [span_65](start_span)// Colocar Balas[span_65](end_span)
        for (int i = 0; i < 20; i++) {
            if (listaBalas[i].activa) {
                mapa[listaBalas[i].fila][listaBalas[i].columna] = '*'; [span_66](start_span)//[span_66](end_span)
            }
        }
        
        [span_67](start_span)// Colocar Enemigos[span_67](end_span)
        for (int i = 0; i < 10; i++) {
            if (listaEnemigos[i].vivo) {
                mapa[listaEnemigos[i].fila][listaEnemigos[i].columna] = '0'; [span_68](start_span)//[span_68](end_span)
            }
        }

        // --- D. Mostrar en Pantalla ---
        mostrarTablero(mapa);
        std::cout << "PUNTAJE: " << estado.puntaje << "   Vidas: " << jugador.vidas << "\n";
        std::cout << "[a/d] Mover | [f] Disparar | [m] Memoria | [9] Salir\n";

        // Ralentiza un poco el juego (aprox 30 FPS)
        usleep(30000); 
    }

    restaurarTeclado(); [span_69](start_span)// Devuelve la consola a su estado normal[span_69](end_span)

    // Pantalla de finalización
    if (estado.victoria) {
        std::cout << "\n¡FELICIDADES, DESTRUISETE A TODOS LOS INVASORES!\n"; [span_70](start_span)//[span_70](end_span)
    } else {
        std::cout << "\nJuego terminado de forma ordenada.\n"; [span_71](start_span)//[span_71](end_span)
    }

    return 0;
}
