#include <iostream>

void incrementarTodos(int *datos, int n) {
    /* i sera el indice usado para recorrer el arreglo. */
    int i;
    
    /* Verificamos que el puntero sea valido. */
    if (datos == nullptr) {
        return;
    }
    
    /* Recorremos el arreglo yaumentamos cada elemento en una unidad. */
    for (i = 0; i < n; i++) {
        datos[i] = datos[i] + 1; /* Tambien puedes usar: datos[i]++; */
    }
}

void mostrarArreglo(int *datos, int n) {
    /* i sera el indice usado para recorrer el arreglo. */
    int i;
    
    /* Recorremos el arreglo para mostrar sus elementos. */
    for (i = 0; i < n; i++) {
        std::cout << datos[i] << " "; /* Se añade un espacio para separar los numeros */
    }
    std::cout << std::endl;
}

int main() {
    /* Declaramos un arreglo de cinco enteros. */
    int datos[5] = {8, 3, 15, 6, 10};
    
    /* Mostramos el arreglo antes del cambio. */
    std::cout << "Antes:   ";
    mostrarArreglo(datos, 5);
    
    /* Modificamos el arreglo original desde una funcion. */
    incrementarTodos(datos, 5);
    
    /* Mostramos el arreglo despues del cambio. */
    std::cout << "Despues: ";
    mostrarArreglo(datos, 5);
    
    return 0;
}
