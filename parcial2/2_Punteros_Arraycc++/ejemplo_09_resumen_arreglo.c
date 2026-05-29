#include <stdio.h>

void analizarArreglo(int *datos, int n, int *suma, int *mayor, int *menor) {
    /* i sera el indice usado para recorrer el arreglo. */
    int i;
    
    /* Verificamos que las direcciones recibidas sean validas. */
    if (datos == NULL || suma == NULL || mayor == NULL || menor == NULL) {
        return;
    }
    
    /* Inicializamos la suma en cero. */
    *suma = 0;
    
    /* Tomamos el primer elemento como referencia inicial. */
    *mayor = datos[0];
    *menor = datos[0];
    
    /* Recorremos el arreglo completo. */
    for (i = 0; i < n; i++) {
        /* Acumulamos el elemento actual en la suma. */
        *suma = *suma + datos[i];
        
        /* Actualizamos el mayor si aparece un valor mas grande. */
        if (datos[i] > *mayor) {
            *mayor = datos[i];
        }
        
        /* Actualizamos el menor si aparece un valor mas pequeño. */
        if (datos[i] < *menor) {
            *menor = datos[i];
        }
    }
}

int main() {
    /* Declaramos un arreglo de cinco enteros. */
    int datos[5] = {8, 3, 15, 6, 10};
    
    /* Declaramos las variables donde se guardaran los resultados. */
    int suma;
    int mayor;
    int menor;
    
    /* Enviamos el arreglo, su tamano y las direcciones de salida. */
    analizarArreglo(datos, 5, &suma, &mayor, &menor);
    
    /* Mostramos los resultados calculados por la funcion. */
    printf("Suma  = %d\n", suma);
    printf("Mayor = %d\n", mayor);
    printf("Menor = %d\n", menor);
    
    return 0;
}
