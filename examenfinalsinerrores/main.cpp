#include <iostream>
#include <windows.h> 
#include "entidades.h"
#include "tablero.h"
#include "juego.h"
#include "teclado.h"
#include "memoria.h"


int main() {
    // 1. Declaración de variables según tus estructuras
    Nave miNave;
    Bala listaBalas[5];           
    Enemigo listaEnemigos[10];     
    Juego miJuego;                 
    char tablero[FILAS][COLUMNAS]; 

    // 2. Inicialización de datos (Funciones exactas de tus .h)
    miJuego.puntaje = 0;
    miJuego.enemigosDestruidos = 0;

    inicializarNave(&miNave);
    inicializarBalas(listaBalas, 5);
    inicializarEnemigos(listaEnemigos, 10);
    
    configurarTeclado(); 

    bool juegoCorriendo = true;
    std::cout << "=== ¡INICIANDO INVASORES ASCII! ===" << std::endl;
    Sleep(1500); 

    // ===================================================
    // BUCLE PRINCIPAL DEL JUEGO
    // ===================================================
    while (juegoCorriendo) {
        
        // A. LEER EL TECLADO
        if (tecladoPresionado()) {
            char tecla = leerTecla();
            if (tecla == 'a' || tecla == 'd') {
                moverNave(&miNave, tecla); 
            } else if (tecla == 'f') {
                dispararBala(listaBalas, 5, &miNave); 
            } else if (tecla == 'm') {
                std::cout << "\n--- REPORTE DE MEMORIA EN VIVO (sizeof) ---" << std::endl;
                std::cout << "Estructura Nave: " << sizeof(Nave) << " bytes." << std::endl;
                std::cout << "Arreglo Balas (5): " << sizeof(listaBalas) << " bytes." << std::endl;
                std::cout << "Arreglo Enemigos (10): " << sizeof(listaEnemigos) << " bytes." << std::endl;
                std::cout << "Estructura Juego: " << sizeof(Juego) << " bytes." << std::endl;
                std::cout << "Matriz Tablero: " << sizeof(tablero) << " bytes." << std::endl;
                std::cout << "-------------------------------------------\n" << std::endl;
                Sleep(000000.1); 
            }
        }

        // B. ACTUALIZAR POSICIONES
        actualizarBalas(listaBalas, 5); 

        // C. DETECTAR COLISIONES
        detectarColisiones(listaBalas, 5, listaEnemigos, 10, &miJuego);

        // ===================================================
        // D. LÓGICA DE DIBUJO DIRECTA (SIN FUNCIONES FANTASMA)
        // ===================================================
        // 1. Limpiamos el tablero con tu función oficial
        limpiarTablero(tablero); 
        
        // 2. Colocar la Nave directamente en la matriz
        tablero[miNave.fila][miNave.columna] = 'X';

        // 3. Colocar las Balas activas directamente en la matriz
        for (int i = 0; i < 5; i++) {
            if (listaBalas[i].activa) {
                tablero[listaBalas[i].fila][listaBalas[i].columna] = '*';
            }
        }

        // 4. Colocar los Enemigos vivos directamente en la matriz
        for (int i = 0; i < 10; i++) {
            if (listaEnemigos[i].vivo) {
                tablero[listaEnemigos[i].fila][listaEnemigos[i].columna] = '0';
            }
        }
        
        // 5. Borrar la pantalla de Windows para el siguiente fotograma
        system("cls"); 
        
        // 6. Mostrar el tablero con tu función oficial
        mostrarTablero(tablero); 

        // E. CONDICIONES DE FIN DE PARTIDA
        if (miNave.vidas <= 0) {
            juegoCorriendo = false;
        } else if (miJuego.enemigosDestruidos >= 10) {
            juegoCorriendo = false;
        }

        // Freno para estabilizar la pantalla de Windows
        Sleep(000000.1); 

    } // <--- FIN DEL WHILE
    // ===================================================

    restaurarTeclado();

    // 3. PANTALLAS FINALES
    system("cls");
    std::cout << "======================================" << std::endl;
    if (miNave.vidas <= 0) {
        std::cout << "  ¡GAME OVER! Los invasores ganaron.   " << std::endl;
    } else {
        std::cout << "  ¡VICTORIA! Has salvado el universo.  " << std::endl;
    }
    std::cout << "======================================" << std::endl;
    std::cout << "Puntaje Final: " << miJuego.puntaje << " puntos." << std::endl;
    std::cout << "Enemigos eliminados: " << miJuego.enemigosDestruidos << "/10" << std::endl;
    std::cout << "======================================" << std::endl;

    return 0;
}
