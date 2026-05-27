#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */

int main(void) { /* Función principal del programa. */
    int x = 25;       /* Variable entera con valor inicial 25. */
    int *p = &x;      /* p guarda la dirección de x. */

    printf("x = %d\n", x);                 /* Muestra el valor directo de x. */
    printf("&x = %p\n", (void *)&x);       /* Muestra la dirección de x. */
    printf("p = %p\n", (void *)p);         /* Muestra la dirección guardada en p. */
    printf("*p = %d\n", *p);               /* Muestra el contenido ubicado en la dirección guardada en p. */

    return 0; /* Finalización exitosa del programa. */
}
