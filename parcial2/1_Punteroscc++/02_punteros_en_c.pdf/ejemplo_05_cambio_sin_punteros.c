#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */

void cambiar(int n) { /* n recibe una copia del valor enviado desde main. */
    n = 100; /* Se modifica la copia local, no la variable original. */
    printf("Dentro de cambiar: n = %d\n", n); /* Muestra la copia modificada. */
}

int main(void) { /* Función principal del programa. */
    int x = 5; /* Variable original. */

    printf("Antes: x = %d\n", x); /* Muestra x antes de llamar la función. */
    
    cambiar(x); /* Se envía el valor de x. La función recibe una copia. */
    
    printf("Despues: x = %d\n", x); /* x no cambia porque solo se modificó la copia. */
    
    return 0; /* Finalización exitosa. */
}
