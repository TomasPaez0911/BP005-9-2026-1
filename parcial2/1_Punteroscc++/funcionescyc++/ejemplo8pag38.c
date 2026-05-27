#include <stdio.h>

// Prototipo de la función
int factorial(int n);

int main() {
    int numero = 5;
    int resultado;

    resultado = factorial(numero);
    printf("El factorial de %d es %d\n", numero, resultado);

    return 0;
}

// Definición de la función (recursiva)
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
