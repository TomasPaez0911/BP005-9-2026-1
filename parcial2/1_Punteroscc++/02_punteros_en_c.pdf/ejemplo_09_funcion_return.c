#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */

int sumar(int a, int b) { /* Recibe dos enteros como entrada. */
    return a + b; /* Devuelve directamente un solo resultado. */
}

int main(void) { /* Función principal del programa. */
    int resultado = sumar(4, 7); /* Llama la función y guarda el valor retornado. */
    
    printf("Resultado = %d\n", resultado); /* Muestra el resultado. */
    
    return 0; /* Finalización exitosa. */
}
