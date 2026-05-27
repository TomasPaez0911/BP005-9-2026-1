#include <iostream> /* Incluye la biblioteca necesaria para std::cout y std::endl. */
// Ya no hace falta incluir <stddef.h> porque en C++ usamos nullptr que es nativo.

void cambiar(int *p) { /* p recibe una copia de una dirección. */
    if (p == nullptr) {  /* En C++ se prefiere nullptr en lugar de NULL para punteros. */
        return;          /* Sale de la función para evitar usar un puntero inválido. */
    }
    *p = 100; /* Escribe 100 en la variable ubicada en la dirección recibida. */
}

int main() { /* Función principal del programa. */
    int x = 5;   /* Variable original. */

    // std::cout reemplaza a printf. El operador << sirve para encadenar las variables.
    std::cout << "Antes: x = " << x << std::endl; /* Muestra x antes de llamar la función. */
    
    cambiar(&x); /* Envía la dirección de x. */
    
    std::cout << "Despues: x = " << x << std::endl; /* x cambia porque la función escribió en su dirección. */
    
    return 0; /* Finalización exitosa. */
}
