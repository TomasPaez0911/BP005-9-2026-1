#include <stdio.h>

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
    printf("Antes: x = %d, y = %d\n", x, y);

    /* Enviamos valores. La función recibe copias. */
    intercambiar(x, y);

    /* Los valores originales no cambian. */
    printf("Despues: x = %d, y = %d\n", x, y);

    return 0;
}
