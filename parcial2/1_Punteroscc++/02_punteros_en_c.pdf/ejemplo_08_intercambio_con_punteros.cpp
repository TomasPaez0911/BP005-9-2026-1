#include <iostream> /* Incluye la biblioteca necesaria para std::cout y std::endl. */
// Ya no hace falta incluir <stddef.h> porque en C++ usamos nullptr que es nativo del lenguaje.

void intercambiar(int *a, int *b) { /* a y b reciben direcciones de variables enteras. */
    if (a == nullptr || b == nullptr) { /* En C++ se prefiere nullptr en lugar de NULL para validar punteros. */
        return;                         /* Sale de la función sin hacer cambios. */
    }
    
    int temp = *a; /* Guarda el contenido apuntado por a. */
    *a = *b;       /* Escribe en la dirección apuntada por a el contenido apuntado por b. */
    *b = temp;     /* Escribe en la dirección apuntada por b el valor temporal. */
}

int main() { /* Función principal del programa. */
    int x = 10;  /* Primera variable original. */
    int y = 20;  /* Segunda variable original. */

    // std::cout reemplaza a printf. El operador << sirve para encadenar las variables y el texto.
    std::cout << "Antes: x = " << x << ", y = " << y << std::endl; /* Valores antes del intercambio. */
    
    intercambiar(&x, &y); /* Envía las direcciones de x y y. */
    
    std::cout << "Despues: x = " << x << ", y = " << y << std::endl; /* Ahora las variables originales cambiaron. */
    
    return 0; /* Finalización exitosa. */
}
