#include <iostream>

void mostrarArreglo(int *datos, int n) {
    /* i sera el indice usado para recorrer el arreglo. */
    int i;
    
    /* Verificamos que el puntero no sea nulo. */
    if (datos == nullptr) {
        std::cout << "El arreglo no es valido." << std::endl;
        return;
    }
    
    /* Recorremos los n elementos usando notacion de indice. */
    for (i = 0; i < n; i++) {
        std::cout << datos[i] << " "; /* Se añade un espacio para separar los numeros */
    }
    std::cout << std::endl;
}

int main() {
    /* Declaramos un arreglo de cinco enteros. */
    int datos[5] = {8, 3, 15, 6, 10};
    
    /* Enviamos el arreglo y su cantidad de elementos. */
    mostrarArreglo(datos, 5);
    
    return 0;
}
