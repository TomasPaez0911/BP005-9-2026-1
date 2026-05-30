#include <stdio.h>
#include <stdlib.h>

int main() {
    /* n guardara la cantidad de datos que se desea almacenar. */
    int n;
    
    /* i sera el indice usado para recorrer el arreglo. */
    int i;
    
    /* datos apuntara al primer elemento del arreglo dinamico. */
    int *datos = NULL;
    
    /* Solicitamos la cantidad de datos. */
    printf("Cuantos enteros desea guardar: ");
    scanf("%d", &n);
    
    /* Reservamos memoria para n enteros. */
    datos = malloc(n * sizeof(int));
    
    /* Verificamos si la reserva fue exitosa. */
    if (datos == NULL) {
        printf("No se pudo reservar memoria.\n");
        return 1;
    }
    
    /* Leemos los datos ingresados por teclado. */
    for (i = 0; i < n; i++) {
        printf("Ingrese datos[%d]: ", i);
        scanf("%d", &datos[i]);
    }
    
    /* Mostramos los datos almacenados. */
    printf("Datos ingresados: ");
    for (i = 0; i < n; i++) {
        printf("%d ", datos[i]); /* Se añadio un espacio para separar los numeros */
    }
    printf("\n");
    
    /* Liberamos la memoria dinamica. */
    free(datos);
    
    /* Evitamos dejar un puntero colgante. */
    datos = NULL;
    
    return 0;
}
