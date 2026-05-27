#include <stdio.h>  /* Incluye la biblioteca necesaria para printf. */
#include <stddef.h> /* Incluye la definición de NULL. */

void cambiar(int *p) { /* p recibe una copia de una dirección. */
    if (p == NULL) {   /* Verifica si la dirección recibida no es válida. */
        return;        /* Sale de la función para evitar usar un puntero inválido. */
    }
    *p = 100; /* Escribe 100 en la variable ubicada en la dirección recibida. */
}

int main(void) { /* Función principal del programa. */
    int x = 5;   /* Variable original. */

    printf("Antes: x = %d\n", x); /* Muestra x antes de llamar la función. */
    
    cambiar(&x); /* Envía la dirección de x. */
    
    printf("Despues: x = %d\n", x); /* x cambia porque la función escribió en su dirección. */
    
    return 0; /* Finalización exitosa. */
}
