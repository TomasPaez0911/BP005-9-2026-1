#include "memoria.h"
#include "entidades.h"
#include "tablero.h"
#include "juego.h"
#include <iostream>

void mostrarReporteMemoria() {
    std::cout << "\n=== REPORTE DE MEMORIA (sizeof) ===\n"; [span_37](start_span)//[span_37](end_span)
    std::cout << "Tamano de estructura Nave: " << sizeof(Nave) << " bytes\n"; [span_38](start_span)//[span_38](end_span)
    std::cout << "Tamano de estructura Bala: " << sizeof(Bala) << " bytes\n"; [span_39](start_span)//[span_39](end_span)
    std::cout << "Tamano de estructura Enemigo: " << sizeof(Enemigo) << " bytes\n"; [span_40](start_span)//[span_40](end_span)
    std::cout << "Tamano de estructura Juego: " << sizeof(Juego) << " bytes\n"; [span_41](start_span)//[span_41](end_span)
    std::cout << "Tamano arreglo de balas (20): " << sizeof(Bala) * 20 << " bytes\n"; [span_42](start_span)//[span_42](end_span)
    std::cout << "Tamano arreglo de enemigos (10): " << sizeof(Enemigo) * 10 << " bytes\n"; [span_43](start_span)//[span_43](end_span)
    std::cout << "Tamano matriz de tablero: " << sizeof(char) * FILAS * COLUMNAS << " bytes\n"; [span_44](start_span)//[span_44](end_span)
    std::cout << "====================================\n";
    std::cout << "Presione ENTER para continuar...";
    
    [span_45](start_span)// Pausa informativa obligatoria[span_45](end_span)
    std::cin.get(); 
}
