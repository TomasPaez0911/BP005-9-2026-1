#include <stdio.h>  /* Incluye la biblioteca necesaria para printf. */
#include <stddef.h> /* Incluye la definición de NULL. */

int main(void) { /* Función principal del programa. */
    int *p = NULL; /* El puntero se inicializa en NULL porque aún no apunta a un int. */

    if (p != NULL) { /* Solo se desreferencia si apunta a una dirección válida. */
        printf("Valor = %d\n", *p);
    } else {
        printf("p no apunta a una direccion valida.\n");
    }

    return 0; /* Finalización exitosa. */
}
