#include <iostream>

int main() {
    // Declaramos 'i' directamente dentro del ciclo for
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break; // Sale del lazo/bucle
        }
        
        // Usamos std::cout para imprimir el número y std::endl para el salto de línea
        std::cout << i << std::endl;
    }

    return 0;
}
