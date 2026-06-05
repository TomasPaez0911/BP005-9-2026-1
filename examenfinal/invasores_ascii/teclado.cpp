#include "teclado.h"
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>

static struct termios iniciales;

void configurarTeclado() {
    struct termios nuevos;
    tcgetattr(0, &iniciales);
    nuevos = iniciales;
    nuevos.c_lflag &= ~ICANON; // Desactiva buffer de línea
    nuevos.c_lflag &= ~ECHO;   // Desactiva el eco de teclas
    tcsetattr(0, TCSANOW, &nuevos);
    
    int flags = fcntl(0, F_GETFL, 0);
    fcntl(0, F_SETFL, flags | O_NONBLOCK); // No bloqueante
}

void restaurarTeclado() {
    tcsetattr(0, TCSANOW, &iniciales);
}

bool tecladoPresionado() {
    int ch = getchar();
    if (ch != EOF) {
        ungetc(ch, stdin);
        return true;
    }
    return false;
}

char leerTecla() {
    return getchar();
}
