#include <iostream>

int main() {
    /* Declaramos un arreglo de tres enteros. */
    int datos[3] = {10, 20, 30};

    /* p apunta al primer elemento del arreglo. */
    int *p = datos;

    /* Mostramos el mismo elemento de varias maneras. */
    std::cout << "datos[1]     = " << datos[1] << std::endl;
    std::cout << "*(datos + 1) = " << *(datos + 1) << std::endl;
    std::cout << "*(p + 1)     = " << *(p + 1) << std::endl;
    std::cout << "p[1]         = " << p[1] << std::endl;

    return 0;
}
