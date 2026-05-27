#include <stdio.h>
#include <stdlib.h>

void llenarArreglo(int *arr, int tam);
void mostrarArreglo(int *arr, int tam);
void modificarArreglo(int *arr, int tam);

int main() {
    int tam;

    printf("=== PROGRAMA 1: ARREGLO DINAMICO EN C ===\n");
    printf("Ingrese el tamano del arreglo: ");
    scanf("%d", &tam);

    
    if (tam <= 0) {
        printf("Tamaño no válido.\n");
        return 1;
    }

  
    int *arreglo = (int *)malloc(tam * sizeof(int));

  
    if (arreglo == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

   
    printf("\n--- Llenando el arreglo ---\n");
    llenarArreglo(arreglo, tam);

    printf("\n--- Arreglo Original ---\n");
    mostrarArreglo(arreglo, tam);

   
    modificarArreglo(arreglo, tam);

    printf("\n--- Arreglo Modificado (Multiplicado por 2) ---\n");
    mostrarArreglo(arreglo, tam);

  
    free(arreglo);
    arreglo = NULL; 
    printf("\nMemoria liberada exitosamente.\n");

    return 0;
}


void llenarArreglo(int *arr, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Ingrese el valor para la posicion [%d]: ", i);
        scanf("%d", (arr + i)); 
    }
}

void mostrarArreglo(int *arr, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Posicion [%d] -> Valor: %d (Direccion: %p)\n", i, *(arr + i), (void*)(arr + i));
    }
}


void modificarArreglo(int *arr, int tam) {
    for (int i = 0; i < tam; i++) {
        *(arr + i) = *(arr + i) * 2;
    }
}
