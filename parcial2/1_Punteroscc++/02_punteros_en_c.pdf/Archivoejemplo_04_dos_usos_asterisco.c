#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */

int main(void) { /* Función principal del programa. */
    int x = 5;   /* Variable entera con valor inicial 5. */
    int *p = &x; /* Declaración de puntero: aquí el * forma parte de la declaración. */

    *p = 40;     /* Desreferenciación: aquí el * accede al contenido apuntado por p. */

    printf("x = %d\n", x); /* Muestra el valor final de x. */

    return 0; /* Finalización exitosa. */
}
