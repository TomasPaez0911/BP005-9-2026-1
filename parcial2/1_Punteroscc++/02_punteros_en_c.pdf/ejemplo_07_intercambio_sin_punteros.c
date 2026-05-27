#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */

void intercambiar(int a, int b) { /* a y b reciben copias locales. */
    int temp = a; /* Guarda temporalmente el valor de a. */
    a = b;        /* Cambia la copia a. */
    b = temp;     /* Cambia la copia b. */
    
    printf("Dentro de intercambiar: a = %d, b = %d\n", a, b); /* Muestra las copias. */
}

int main(void) { /* Función principal del programa. */
    int x = 10;  /* Primera variable original. */
    int y = 20;  /* Segunda variable original. */

    printf("Antes: x = %d, y = %d\n", x, y); /* Valores antes del intercambio. */
    
    intercambiar(x, y); /* Envía valores; la función recibe copias. */
    
    printf("Despues: x = %d, y = %d\n", x, y); /* Las variables originales no cambian. */
    
    return 0; /* Finalización exitosa. */
}
