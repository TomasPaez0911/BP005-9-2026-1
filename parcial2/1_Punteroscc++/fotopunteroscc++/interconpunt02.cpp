#include <iostream>

void intercambiar(int *a, int *b) {
    /* En C++ verificamos con nullptr en lugar de NULL */
    if (a == nullptr || b == nullptr) {
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

    std::cout << "Antes: x = " << x << ", y = " << y << "\n";

    /* Enviamos direcciones usando el operador de dirección (&) */
    intercambiar(&x, &y);

    std::cout << "Despues: x = " << x << ", y = " << y << "\n";

    return 0;
}
