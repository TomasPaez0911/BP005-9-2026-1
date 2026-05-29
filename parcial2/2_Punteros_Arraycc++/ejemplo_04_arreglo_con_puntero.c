#include <stdio.h>

int main() {
    /* Declaramos un arreglo de cinco enteros. */
    int datos[5] = {8, 3, 15, 6, 10};

    /* p apunta al primer elemento del arreglo. */
    int *p = datos;

    /* i será el índice usado para recorrer el arreglo. */
    int i;

    /* Recorremos el arreglo usando aritmética de punteros. */
    for (i = 0; i < 5; i++) {
        /* *(p + i) accede al elemento ubicado i posiciones después de p. */
        printf("Elemento %d = %d\n", i, *(p + i));
    }

    return 0;
}
