#include <stdio.h>

void incrementarTodos(int *datos, int n) {
    /* i sera el indice usado para recorrer el arreglo. */
    int i;
    
    /* Verificamos que el puntero sea valido. */
    if (datos == NULL) {
        return;
    }
    
    /* Recorremos el arreglo y aumentamos cada elemento en una unidad. */
    for (i = 0; i < n; i++) {
        datos[i] = datos[i] + 1; /* Tambien se puede escribir como datos[i]++; */
    }
}

void mostrarArreglo(int *datos, int n) {
    /* i sera el indice usado para recorrer el arreglo. */
    int i;
    
    /* Recorremos el arreglo para mostrar sus elementos. */
    for (i = 0; i < n; i++) {
        printf("%d ", datos[i]); /* Se añadio un espacio para separar los numeros */
    }
    printf("\n");
}

int main() {
    /* Declaramos un arreglo de cinco enteros. */
    int datos[5] = {8, 3, 15, 6, 10};
    
    /* Mostramos el arreglo antes del cambio. */
    printf("Antes:   ");
    mostrarArreglo(datos, 5);
    
    /* Modificamos el arreglo original desde una funcion. */
    incrementarTodos(datos, 5);
    
    /* Mostramos el arreglo despues del cambio. */
    printf("Despues: ");
    mostrarArreglo(datos, 5);
    
    return 0;
}
