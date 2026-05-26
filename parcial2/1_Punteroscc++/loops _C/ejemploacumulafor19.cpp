#include <iostream>

int main() {
    int suma = 0; // Acumulador

    // En C++ es mejor declarar la variable de control 'i' dentro del mismo bucle
    for (int i = 1; i <= 10; i++) {
        suma += i; // Forma compacta de hacer suma = suma + i
    }

    // Usamos std::cout para imprimir en pantalla
    std::cout << "la suma es: " << suma << std::endl;

    return 0;
}
