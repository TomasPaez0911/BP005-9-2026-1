#include <stdio.h>


int sumar(int a, int b);

int main() {
    int resultado;

    resultado = sumar(4, 7);
    printf("Resultado: %d\n", resultado);

    return 0;
}


int sumar(int a, int b) {
    int r = a + b;
    return r;
}
