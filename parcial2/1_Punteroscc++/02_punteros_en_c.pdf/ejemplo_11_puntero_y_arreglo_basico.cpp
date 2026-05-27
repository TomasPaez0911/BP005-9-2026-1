#include <iostream> /* Incluye la biblioteca necesaria para std::cout y std::endl. */

int main() { /* Función principal del programa. */
    int datos[3] = {10, 20, 30}; /* Arreglo de tres enteros. */
    int *p = datos; /* p apunta al primer elemento del arreglo. */

    // std::cout reemplaza a printf. El operador << sirve para encadenar texto y variables.
    std::cout << "datos[0] = " << datos[0] << std::endl; /* Acceso mediante índice. */
    std::cout << "*p = " << *p << std::endl;             /* Acceso mediante puntero. */
    
    std::cout << "*(p + 1) = " << *(p + 1) << std::endl; /* Acceso al segundo elemento. */
    std::cout << "*(p + 2) = " << *(p + 2) << std::endl; /* Acceso al tercer elemento. */

    return 0; /* Finalización exitosa. */
}
