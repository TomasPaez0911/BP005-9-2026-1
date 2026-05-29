#include <stdio.h>

int main() {
    /* Declaramos un arreglo de tres enteros. */
    int datos[3] = {10, 20, 30};

    /* p apunta al primer elemento del arreglo. */
    int *p = datos;

    /* Mostramos el mismo elemento de varias maneras. */
    printf("datos[1]     = %d\n", datos[1]);
    printf("*(datos + 1) = %d\n", *(datos + 1));
    printf("*(p + 1)     = %d\n", *(p + 1));
    printf("p[1]         = %d\n", p[1]);

    return 0;
}
