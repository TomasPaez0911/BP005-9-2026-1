#include <iostream>

void intercambiar(int a, int b) {
    /* a y b son copias locales de x y y. */
    int temp = a;

    /* Se intercambian las copias, no las variables originales. */
    a = b;
    b = temp;
}

int main() {
    /* Variables originales. */
    int x = 10;
    int y = 20;

    /* Mostramos los valores antes del intento de intercambio. */
    std::cout << "Antes: x = " << x << ", y = " << y << "\n";

    /* Enviamos valores. La función recibe copias. */
    intercambiar(x, y);

    /* Los valores originales no cambian. */
    std::cout << "Despues: x = " << x << ", y = " << y << "\n";

    return 0;
}
