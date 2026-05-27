#include <iostream> /* Incluye la biblioteca necesaria para std::cout y std::endl. */
// Ya no es necesario incluir <stddef.h> porque en C++ usamos nullptr que es nativo del lenguaje.

int main() { /* Función principal del programa. */
    int *p = nullptr; /* En C++ se inicializa en nullptr porque aún no apunta a un int. */

    if (p != nullptr) { /* Solo se desreferencia si apunta a una dirección válida. */
        std::cout << "Valor = " << *p << std::endl; // std::cout reemplaza a printf.
    } else {
        std::cout << "p no apunta a una direccion valida." << std::endl;
    }

    return 0; /* Finalización exitosa. */
}
