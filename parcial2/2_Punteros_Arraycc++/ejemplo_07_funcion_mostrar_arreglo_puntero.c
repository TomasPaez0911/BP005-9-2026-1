#include <stdio.h>

void mostrarArreglo(int *datos, int n) {
    /* i sera el indice usado para recorrer el arreglo. */
    int i;
    
    /* Verificamos que el puntero no sea nulo. */
    if (datos == NULL) {
        printf("El arreglo no es valido.\n");
        return;
    }
    
    /* Recorremos los n elementos usando notacion de indice. */
    for (i = 0; i < n; i++) {
        printf("%d ", datos[i]); /* Se añadio un espacio para separar los numeros */
    }
    printf("\n");
}

int main() {
    /* Declaramos un arreglo de cinco enteros. */
    int datos[5] = {8, 3, 15, 6, 10};
    
    /* Enviamos el arreglo y su cantidad de elementos. */
    mostrarArreglo(datos, 5);
    
    return 0;
}
