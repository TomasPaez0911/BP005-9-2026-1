#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */

int main(void) { /* Función principal del programa. */
    int datos[3] = {10, 20, 30}; /* Arreglo de tres enteros. */
    int *p = datos; /* p apunta al primer elemento del arreglo. */

    printf("datos[0] = %d\n", datos[0]); /* Acceso mediante índice. */
    printf("*p = %d\n", *p);             /* Acceso mediante puntero. */
    
    printf("*(p + 1) = %d\n", *(p + 1)); /* Acceso al segundo elemento. */
    printf("*(p + 2) = %d\n", *(p + 2)); /* Acceso al tercer elemento. */

    return 0; /* Finalización exitosa. */
}
