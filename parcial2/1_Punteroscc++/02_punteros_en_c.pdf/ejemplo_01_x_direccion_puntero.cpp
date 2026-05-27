#include <iostream> /* Incluye la biblioteca necesaria para std::cout y std::endl. */

int main() { /* Función principal del programa. */
    int x = 25;       /* Variable entera con valor inicial 25. */
    int *p = &x;      /* p guarda la dirección de x. */

    // std::cout reemplaza a printf. 
    // static_cast<void*> se usa en C++ en lugar del casteo tipo C (void*) para imprimir direcciones.
    std::cout << "x = " << x << std::endl;                                 /* Muestra el valor directo de x. */
    std::cout << "&x = " << static_cast<void*>(&x) << std::endl;           /* Muestra la dirección de x. */
    std::cout << "p = " << static_cast<void*>(p) << std::endl;             /* Muestra la dirección guardada en p. */
    std::cout << "*p = " << *p << std::endl;                               /* Muestra el contenido ubicado en la dirección guardada en p. */

    return 0; /* Finalización exitosa del programa. */
}
