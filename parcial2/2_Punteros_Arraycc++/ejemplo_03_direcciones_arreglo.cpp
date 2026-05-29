#include <iostream>

int main() {
    /* Declaramos un arreglo de cinco enteros. */
    int datos[5] = {8, 3, 15, 6, 10};

    /* i será el índice usado para recorrer el arreglo. */
    int i;

    /* Mostramos el valor y la dirección de cada elemento. */
    for (i = 0; i < 5; i++) {
        std::cout << "datos[" << i << "] = " << datos[i] 
                  << ", direccion = " << static_cast<const void*>(&datos[i]) 
                  << std::endl;
    }

    return 0;
}
