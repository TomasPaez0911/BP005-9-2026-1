#include <stdio.h>  /* Incluye la biblioteca necesaria para printf y scanf. */
#include <stddef.h> /* Incluye la definición de NULL. */

/* --- Declaración de Funciones --- */
void duplicar(int *p);
void intercambiar(int *a, int *b);

/* --- Función Principal --- */
int main(void) {
    int x = 10;
    int y = 20;

    printf("=== VALORES INICIALES ===\n");
    printf("x = %d, y = %d\n\n", x, y);

    /* 1. Probar la función duplicar */
    printf("=== PROBANDO DUPLICAR ===\n");
    duplicar(&x); /* Pasamos la dirección de x para duplicar su valor */
    printf("x duplicado = %d\n\n", x);

    /* 2. Probar la función intercambiar */
    printf("=== PROBANDO INTERCAMBIAR ===\n");
    printf("Antes del intercambio: x = %d, y = %d\n", x, y);
    intercambiar(&x, &y); /* Pasamos las direcciones de x y de y */
    printf("Despues del intercambio: x = %d, y = %d\n", x, y);

    return 0; /* Finalización exitosa del programa. */
}

/* --- Definición de Funciones --- */

/**
 * Recibe la dirección de un entero y duplica su valor directamente en la memoria.
 */
void duplicar(int *p) { /* Recibe la dirección de un entero. */
    if (p != NULL) { /* Verifica que el puntero sea válido. */
        *p = (*p) * 2; /* Duplica el valor almacenado en la dirección apuntada. */
    }
}

/**
 * Recibe dos direcciones de enteros e intercambia sus contenidos de forma efectiva.
 */
void intercambiar(int *a, int *b) { /* Recibe dos direcciones de enteros. */
    if (a == NULL || b == NULL) { /* Verifica que ambas direcciones sean válidas. */
        return; /* Sale si alguna dirección no es válida. */
    }
    
    int temp = *a; /* Guarda temporalmente el contenido apuntado por a. */
    *a = *b;       /* Copia en a el contenido apuntado por b. */
    *b = temp;     /* Copia en b el valor temporal. */
}
