#include "teclado.h"
#include <conio.h> // Biblioteca especial de Windows para leer teclas al instante
#include <iostream>

void configurarTeclado() {}
void restaurarTeclado() {}

bool tecladoPresionado() {
    return kbhit(); // Detecta si el jugador tocó una tecla
}

char leerTecla() {
    return getch(); // Lee la tecla inmediatamente sin pedir presionar Enter
}
