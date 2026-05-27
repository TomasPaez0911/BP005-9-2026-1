#include <stdio.h>  /* Incluye la biblioteca necesaria para printf y scanf. */
#include <stddef.h> /* Incluye la definición de NULL. */

/* --- 1. Declaración de Funciones (Prototipos) --- */
void duplicar(int *p);
void intercambiar(int *a, int *b);
void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor);

/* --- 2. Función Principal --- */
int main(void) { /* Función principal del programa. */
    int x = 10;   /* Primera variable de trabajo. */
    int y = 20;   /* Segunda variable de trabajo. */
    int z = 5;    /* Tercera variable de trabajo. */
    
    int *px = &x; /* px guarda la dirección de x. */
    
    int suma;     /* Variable para recibir la suma. */
    int mayor;    /* Variable para recibir el mayor. */
    int menor;    /* Variable para recibir el menor. */
    int opcion;   /* Opción seleccionada por el usuario. */

    do { /* Ciclo principal del menú. */
        printf("\n========== MENU CORTO DE PUNTEROS ==========\n");
        printf("1. Mostrar x, &x, px y *px\n");
        printf("2. Duplicar x usando el puntero px\n");
        printf("3. Intercambiar x y y usando punteros\n");
        printf("4. Analizar x, y, z usando punteros de salida\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        
        scanf("%d", &opcion); /* Lee la opción del usuario. */

        switch (opcion) { /* Decide qué acción ejecutar según la opción. */
            case 1:
                printf("\n--- Mostrando Informacion de Memoria ---\n");
                printf("x   = %d\n", x);
                printf("&x  = %p\n", (void*)&x);
                printf("px  = %p\n", (void*)px);
                printf("*px = %d\n", *px);
                break;
                
            case 2:
                printf("\n--- Probando Duplicar ---\n");
                printf("Antes: x = %d\n", x);
                duplicar(px); /* Modifica x usando su dirección guardada en px. */
                printf("Despues: x = %d\n", x);
                break;
                
            case 3:
                printf("\n--- Probando Intercambiar ---\n");
                printf("Antes: x = %d, y = %d\n", x, y);
                intercambiar(&x, &y); /* Envía las direcciones de x y y. */
                printf("Despues: x = %d, y = %d\n", x, y);
                break;
                
            case 4:
                printf("\n--- Probando Analisis Completo ---\n");
                printf("Variables a analizar: x = %d, y = %d, z = %d\n", x, y, z);
                analizarNumeros(x, y, z, &suma, &mayor, &menor); /* Envía valores y direcciones de salida. */
                printf("Suma  = %d\n", suma);
                printf("Mayor = %d\n", mayor);
                printf("Menor = %d\n", menor);
                break;
                
            case 0:
                printf("\nFin del programa. ¡Hasta luego!\n");
                break;
                
            default:
                printf("\nOpcion no valida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != 0); /* Repite el ciclo mientras no se seleccione salir. */

    return 0; /* Finalización exitosa. */
}

/* --- 3. Definición de Funciones --- */

/**
 * Recibe la dirección de un entero y duplica su contenido en memoria.
 */
void duplicar(int *p) { /* Recibe la dirección de un entero. */
    if (p != NULL) { /* Verifica que el puntero sea válido. */
        *p = (*p) * 2; /* Duplica el valor almacenado en la dirección apuntada. */
    }
}

/**
 * Intercambia el contenido de dos variables utilizando sus direcciones de memoria.
 */
void intercambiar(int *a, int *b) { /* Recibe dos direcciones de enteros. */
    if (a == NULL || b == NULL) { /* Verifica que ambas direcciones sean válidas. */
        return; /* Sale si alguna dirección no es válida. */
    }
    int temp = *a; /* Guarda temporalmente el contenido apuntado por a. */
    *a = *b;       /* Copia en a el contenido apuntado por b. */
    *b = temp;     /* Copia en b el valor temporal. */
}

/**
 * Calcula la suma, el mayor y el menor de tres números, y escribe los resultados
 * en las variables originales del main mediante punteros de salida.
 */
void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor) {
    if (suma == NULL || mayor == NULL || menor == NULL) { /* Verifica direcciones. */
        return; /* Sale si alguna dirección no es válida. */
    }

    *suma = a + b + c; /* Escribe la suma en la dirección recibida. */

    /* Algoritmo para encontrar el mayor */
    *mayor = a; /* Supone inicialmente que a es el mayor. */
    if (b > *mayor) {
        *mayor = b; /* Actualiza el mayor. */
    }
    if (c > *mayor) {
        *mayor = c; /* Actualiza el mayor. */
    }

    /* Algoritmo para encontrar el menor */
    *menor = a; /* Supone inicialmente que a es el menor. */
    if (b < *menor) {
        *menor = b; /* Actualiza el menor. */
    }
    if (c < *menor) {
        *menor = c; /* Actualiza el menor. */
    }
}
