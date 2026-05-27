#include <iostream> /* Incluye la biblioteca necesaria para std::cout y std::endl. */

int sumar(int a, int b) { /* Recibe dos enteros como entrada. */
    return a + b; /* Devuelve directamente un solo resultado. */
}

int main() { /* Función principal del programa. */
    int resultado = sumar(4, 7); /* Llama la función y guarda el valor retornado. */
    
    // std::cout reemplaza a printf. El operador << se usa para encadenar texto y variables.
    std::cout << "Resultado = " << resultado << std::endl; /* Muestra el resultado. */
    
    return 0; /* Finalización exitosa. */
}
