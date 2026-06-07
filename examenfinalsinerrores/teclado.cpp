#include "teclado.h"
#include <conio.h> // Esta es la librería mágica para Windows
#include <iostream>

void configurarTeclado() {
    // En Windows queda vacío
}

void restaurarTeclado() {
    // En Windows queda vacío
}

bool tecladoPresionado() {
    return kbhit(); // Detecta si tocaste una tecla en Windows
}

char leerTecla() {
    return getch(); // Lee la tecla al instante sin pedir Enter
}
