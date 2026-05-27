#include <stdio.h>  /* Incluye la biblioteca necesaria para printf. */
#include <stddef.h> /* Incluye la definición de NULL. */

void intercambiar(int *a, int *b) { /* a y b reciben direcciones de variables enteras. */
    if (a == NULL || b == NULL) {   /* Verifica si alguna dirección no es válida. */
        return;                     /* Sale de la función sin hacer cambios. */
    }
    
    int temp = *a; /* Guarda el contenido apuntado por a. */
    *a = *b;       /* Escribe en la dirección apuntada por a el contenido apuntado por b. */
    *b = temp;     /* Escribe en la dirección apuntada por b el valor temporal. */
}

int main(void) { /* Función principal del programa. */
    int x = 10;  /* Primera variable original. */
    int y = 20;  /* Segunda variable original. */

    printf("Antes: x = %d, y = %d\n", x, y); /* Valores antes del intercambio. */
    
    intercambiar(&x, &y); /* Envía las direcciones de x y y. */
    
    printf("Despues: x = %d, y = %d\n", x, y); /* Ahora las variables originales cambiaron. */
    
    return 0; /* Finalización exitosa. */
}
