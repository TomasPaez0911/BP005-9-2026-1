#include <iostream> /* Incluye la biblioteca necesaria para std::cout y std::endl. */

int main() { /* Función principal del programa. */
    int x = 5;   /* Variable entera con valor inicial 5. */
    int *p = &x; /* Declaración de puntero: aquí el * forma parte de la declaración. */

    *p = 40;     /* Desreferenciación: aquí el * accede al contenido apuntado por p. */

    // std::cout reemplaza a printf. Usamos el operador << para enviar el texto y la variable.
    std::cout << "x = " << x << std::endl; /* Muestra el valor final de x. */

    return 0; /* Finalización exitosa. */
}
