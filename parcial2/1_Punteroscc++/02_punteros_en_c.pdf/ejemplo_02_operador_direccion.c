#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */

int main(void) { /* Función principal del programa. */
    int x = 10;  /* Variable entera con valor inicial 10. */

    printf("Valor de x = %d\n", x);              /* Muestra el valor de x. */
    printf("Direccion de x = %p\n", (void *)&x);  /* Muestra la dirección de x. */

    return 0; /* Finalización exitosa. */
}
