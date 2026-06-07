#include "memoria.h"
#include "entidades.h"
#include "tablero.h"
#include "juego.h"
#include <iostream>

void mostrarReporteMemoria() {
    std::cout << "\n=== REPORTE DE MEMORIA (sizeof) ===\n"; 
    std::cout << "Tamano de estructura Nave: " << sizeof(Nave) << " bytes\n";
    std::cout << "Tamano de estructura Bala: " << sizeof(Bala) << " bytes\n"; 
    std::cout << "Tamano de estructura Enemigo: " << sizeof(Enemigo) << " bytes\n"; 
    std::cout << "Tamano de estructura Juego: " << sizeof(Juego) << " bytes\n"; 
    std::cout << "Tamano arreglo de balas (20): " << sizeof(Bala) * 20 << " bytes\n"; 
    std::cout << "Tamano arreglo de enemigos (10): " << sizeof(Enemigo) * 10 << " bytes\n"; 
    std::cout << "Tamano matriz de tablero: " << sizeof(char) * FILAS * COLUMNAS << " bytes\n"; 
    std::cout << "====================================\n";
    std::cout << "Presione ENTER para continuar...";
    
   std::cin.get(); 
}
