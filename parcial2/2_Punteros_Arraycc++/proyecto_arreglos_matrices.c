#include <stdio.h>
#include <stdlib.h>

// Prototipos de funciones (pasando el tamaño y el puntero)
void llenarArreglo(int *arr, int tam);
void mostrarArreglo(int *arr, int tam);
void modificarArreglo(int *arr, int tam);

int main() {
    int tam;

    printf("=== PROGRAMA 1: ARREGLO DINAMICO EN C ===\n");
    printf("Ingrese el tamano del arreglo: ");
    scanf("%d", &tam);

    // Validación básica de tamaño
    if (tam <= 0) {
        printf("Tamaño no válido.\n");
        return 1;
    }

    // 1. Reservar memoria dinámica con malloc
    int *arreglo = (int *)malloc(tam * sizeof(int));

    // Verificar si la asignación fue exitosa
    if (arreglo == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    // 2. Llamadas a las funciones pasando el arreglo y su tamaño
    printf("\n--- Llenando el arreglo ---\n");
    llenarArreglo(arreglo, tam);

    printf("\n--- Arreglo Original ---\n");
    mostrarArreglo(arreglo, tam);

    // Modificación (multiplicar por 2 usando notación de punteros)
    modificarArreglo(arreglo, tam);

    printf("\n--- Arreglo Modificado (Multiplicado por 2) ---\n");
    mostrarArreglo(arreglo, tam);

    // 3. Liberar la memoria dinámica obligatoriamente con free
    free(arreglo);
    arreglo = NULL; // Buena práctica: evitar punteros colgantes
    printf("\nMemoria liberada exitosamente.\n");

    return 0;
}

// Función para llenar usando aritmética de punteros *(arr + i)
void llenarArreglo(int *arr, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Ingrese el valor para la posicion [%d]: ", i);
        scanf("%d", (arr + i)); // (arr + i) es la dirección de memoria
    }
}

// Función para mostrar usando aritmética de punteros
void mostrarArreglo(int *arr, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Posicion [%d] -> Valor: %d (Direccion: %p)\n", i, *(arr + i), (void*)(arr + i));
    }
}

// Función que modifica los datos originales multiplicándolos por 2
void modificarArreglo(int *arr, int tam) {
    for (int i = 0; i < tam; i++) {
        *(arr + i) = *(arr + i) * 2; // Accede y duplica el valor original
    }
}
