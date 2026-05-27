#include <iostream>

int main() {
    int n;
    int fila, espacios, simbolos;

    std::cout << "Ingrese el tamano del rombo: ";
    std::cin >> n;

 
    for (fila = 1; fila <= n; fila++) {
        for (espacios = 1; espacios <= n - fila; espacios++) {
            std::cout << " ";
        }
        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

   
    for (fila = n - 1; fila >= 1; fila--) {
        for (espacios = 1; espacios <= n - fila; espacios++) {
            std::cout << " ";
        }
        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}
