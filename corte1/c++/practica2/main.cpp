#include <iostream> // Biblioteca para entrada/salida

int main() {
    int num1, num2, suma; // Declaración de variables enteras

    // Solicitar números al usuario
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    // Realizar la suma
    suma = num1 + num2;

    // Mostrar el resultado
    std::cout << "La suma de " << num1 << " + " << num2 << " es: " << suma << std::endl;

    return 0; // Fin del programa
}

