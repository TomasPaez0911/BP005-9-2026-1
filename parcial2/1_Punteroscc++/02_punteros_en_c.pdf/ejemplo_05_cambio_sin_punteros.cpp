#include <iostream> /* Incluye la biblioteca necesaria para std::cout y std::endl. */

void cambiar(int n) { /* n recibe una copia del valor enviado desde main. */
    n = 100; /* Se modifica la copia local, no la variable original. */
    
    // std::cout reemplaza a printf. El operador << encadena el texto y la variable.
    std::cout << "Dentro de cambiar: n = " << n << std::endl; /* Muestra la copia modificada. */
}

int main() { /* Función principal del programa. */
    int x = 5; /* Variable original. */

    std::cout << "Antes: x = " << x << std::endl; /* Muestra x antes de llamar la función. */
    
    cambiar(x); /* Se envía el valor de x. La función recibe una copia. */
    
    std::cout << "Despues: x = " << x << std::endl; /* x no cambia porque solo se modificó la copia. */
    
    return 0; /* Finalización exitosa. */
}
