#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */

int main(void) { /* Función principal del programa. */
    int x = 25;  /* Variable entera con valor inicial 25. */
    int *p = &x; /* p guarda la dirección de x. */

    printf("x = %d\n", x);   /* Muestra el valor directo de x. */
    printf("*p = %d\n", *p); /* Muestra el valor encontrado en la dirección guardada en p. */

    *p = 99; /* Modifica x indirectamente mediante el puntero p. */

    printf("x despues = %d\n", x); /* Muestra x después de la modificación indirecta. */

    return 0; /* Finalización exitosa. */
}
