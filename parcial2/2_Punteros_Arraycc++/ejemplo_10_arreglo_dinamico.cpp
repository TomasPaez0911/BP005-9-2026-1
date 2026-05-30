#include <iostream>

int main() {
    /* n guardara la cantidad de datos que se desea almacenar. */
    int n;
    
    /* i sera el indice usado para recorrer el arreglo. */
    int i;
    
    /* datos apuntara al primer elemento del arreglo dinamico. */
    int *datos = nullptr;
    
    /* Solicitamos la cantidad de datos. */
    std::cout << "Cuantos enteros desea guardar: ";
    std::cin >> n;
    
    /* Reservamos memoria para n enteros usando el operador new. */
    datos = new int[n];
    
    /* Leemos los datos ingresados por teclado. */
    for (i = 0; i < n; i++) {
        std::cout << "Ingrese datos[" << i << "]: ";
        std::cin >> datos[i];
    }
    
    /* Mostramos los datos almacenados. */
    std::cout << "Datos ingresados: ";
    for (i = 0; i < n; i++) {
        std::cout << datos[i] << " "; /* Se añade un espacio para separar los numeros */
    }
    std::cout << std::endl;
    
    /* Liberamos la memoria dinamica usando delete[]. */
    delete[] datos;
    
    /* Evitamos dejar un puntero colgante. */
    datos = nullptr;
    
    return 0;
}
