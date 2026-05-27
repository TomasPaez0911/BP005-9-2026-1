#include <iostream> /* Incluye la biblioteca necesaria para std::cout y std::endl. */

int main() { /* Función principal del programa. */
    int x = 25;  /* Variable entera con valor inicial 25. */
    int *p = &x; /* p guarda la dirección de x. */

    // std::cout reemplaza a printf. Usamos << para encadenar las variables y el texto.
    std::cout << "x = " << x << std::endl;   /* Muestra el valor directo de x. */
    std::cout << "*p = " << *p << std::endl; /* Muestra el valor encontrado en la dirección guardada en p. */

    *p = 99; /* Modifica x indirectamente mediante el puntero p. */

    std::cout << "x despues = " << x << std::endl; /* Muestra x después de la modificación indirecta. */

    return 0; /* Finalización exitosa. */
}
