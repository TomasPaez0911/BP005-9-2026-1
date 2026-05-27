#include <iostream> /* Incluye la biblioteca necesaria para std::cout y std::endl. */

int main() { /* Función principal del programa. */
    int x = 10;  /* Variable entera con valor inicial 10. */

    // std::cout reemplaza a printf y los operadores << sirven para encadenar texto y variables.
    std::cout << "Valor de x = " << x << std::endl;              /* Muestra el valor de x. */
    
    // static_cast<void*> se usa en C++ en lugar del casteo clásico (void*) para imprimir direcciones de memoria de forma segura.
    std::cout << "Direccion de x = " << static_cast<void*>(&x) << std::endl;  /* Muestra la dirección de x. */

    return 0; /* Finalización exitosa. */
}
