#include <iostream>

int main() {
    float nota;        // Guarda cada nota
    float suma = 0.0;  // Acumulador
    float promedio;    // Resultado final
    
    // Declaramos 'i' directamente en el bucle for
    for (int i = 1; i <= 4; i++) {
        std::cout << "ingrese la nota " << i << ": ";
        std::cin >> nota; // Recibe la nota del usuario
        
        suma += nota;     // Acumula las notas ingresadas (suma = suma + nota)
    }
    
    promedio = suma / 4.0; // Calcula el promedio
    
    // Para limitar los decimales a 2 (como el %.2f de C), configuramos std::cout
    std::cout.precision(2);
    std::cout << std::fixed;
    
    std::cout << "el promedio es: " << promedio << std::endl;
    
    return 0;
}
