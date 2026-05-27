#include <iostream> /* Incluye la biblioteca necesaria para std::cout y std::endl. */

void intercambiar(int a, int b) { /* a y b reciben copias locales. */
    int temp = a; /* Guarda temporalmente el valor de a. */
    a = b;        /* Cambia la copia a. */
    b = temp;     /* Cambia la copia b. */
    
    // std::cout reemplaza a printf. Usamos << para encadenar las variables y el texto.
    std::cout << "Dentro de intercambiar: a = " << a << ", b = " << b << std::endl; /* Muestra las copias. */
}

int main() { /* Función principal del programa. */
    int x = 10;  /* Primera variable original. */
    int y = 20;  /* Segunda variable original. */

    std::cout << "Antes: x = " << x << ", y = " << y << std::endl; /* Valores antes del intercambio. */
    
    intercambiar(x, y); /* Envía valores; la función recibe copias. */
    
    std::cout << "Despues: x = " << x << ", y = " << y << std::endl; /* Las variables originales no cambian. */
    
    return 0; /* Finalización exitosa. */
}
