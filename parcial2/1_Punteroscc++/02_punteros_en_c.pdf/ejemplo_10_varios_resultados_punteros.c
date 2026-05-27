#include <stdio.h>  /* Incluye la biblioteca necesaria para printf. */
#include <stddef.h> /* Incluye la definición de NULL. */

void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor) {
    if (suma == NULL || mayor == NULL || menor == NULL) { /* Verifica direcciones. */
        return; /* Sale si alguna dirección no es válida. */
    }

    *suma = a + b + c; /* Escribe la suma en la dirección recibida. */

    *mayor = a; /* Supone inicialmente que a es el mayor. */
    if (b > *mayor) { /* Compara b con el mayor actual. */
        *mayor = b;   /* Actualiza el mayor si b es más grande. */
    }
    if (c > *mayor) { /* Compara c con el mayor actual. */
        *mayor = c;   /* Actualiza el mayor si c es más grande. */
    }

    *menor = a; /* Supone inicialmente que a es el menor. */
    if (b < *menor) { /* Compara b con el menor actual. */
        *menor = b;   /* Actualiza el menor si b es más pequeño. */
    }
    if (c < *menor) { /* Compara c con el menor actual. */
        *menor = c;   /* Actualiza el menor si c es más pequeño. */
    }
}

int main(void) { /* Función principal del programa. */
    int x = 8;   /* Primer dato de entrada. */
    int y = 3;   /* Segundo dato de entrada. */
    int z = 15;  /* Tercer dato de entrada. */

    int suma;  /* Variable donde se escribirá la suma. */
    int mayor; /* Variable donde se escribirá el mayor. */
    int menor; /* Variable donde se escribirá el menor. */

    /* Envía valores por copia (x, y, z) y las direcciones de memoria de los resultados (&suma, &mayor, &menor) */
    analizarNumeros(x, y, z, &suma, &mayor, &menor); 

    printf("Suma = %d\n", suma);   /* Muestra la suma. */
    printf("Mayor = %d\n", mayor); /* Muestra el mayor. */
    printf("Menor = %d\n", menor); /* Muestra el menor. */

    return 0; /* Finalización exitosa. */
}
