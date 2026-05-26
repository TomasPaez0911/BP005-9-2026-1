#include <iostream>

int main() {
    int contador = 0; // Cuenta cuántos pares hay
    
    // Declaramos 'i' directamente dentro del bucle for
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            // Imprimimos el número y el texto usando std::cout
            std::cout << i << " es par" << std::endl;
            contador++;
        }
    }
    
    // Imprimimos el resultado final
    std::cout << "cantidad de numeros pares: " << contador << std::endl;
    
    return 0;
}
