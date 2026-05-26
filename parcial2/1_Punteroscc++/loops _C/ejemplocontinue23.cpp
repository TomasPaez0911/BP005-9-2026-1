#include <iostream>

int main() {
    // Declaramos 'i' directamente dentro del bucle for
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Omite esta iteración
        }
        
        // Usamos std::cout para imprimir en pantalla
        std::cout << i << std::endl;
    }

    return 0;
}
