#include <stdio.h>

void intercambiar(int *a, int *b) {

    /* Verificamos que las direcciones recibidas sean válidas. */
    if (a == NULL || b == NULL) {
        return;
    }

    /* temp guarda temporalmente el contenido apuntado por a. */
    int temp = *a;

    /* En la dirección apuntada por a escribimos el contenido apuntado por b. */
    *a = *b;

    /* En la dirección apuntada por b escribimos el valor temporal. */
    *b = temp;
}

int main() {

    int x = 10;
    int y = 20;

    printf("Antes: x = %d, y = %d\n", x, y);

    /* Enviamos direcciones, no valores. */
    intercambiar(&x, &y);

    printf("Despues: x = %d, y = %d\n", x, y);

    return 0;
}
