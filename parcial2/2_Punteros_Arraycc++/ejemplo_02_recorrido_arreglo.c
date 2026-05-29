#include <stdio.h>

int main() {
    /* Declaramos un arreglo de cinco enteros. */
    int datos[5] = {8, 3, 15, 6, 10};
    
    /* i será el índice usado para recorrer el arreglo. */
    int i;

    /* Recorremos los índices válidos: 0, 1, 2, 3 y 4. */
    for (i = 0; i < 5; i++) {
        /* En cada vuelta se muestra el elemento datos[i]. */
        printf("datos[%d] = %d\n", i, datos[i]);
    }

    return 0;
}
