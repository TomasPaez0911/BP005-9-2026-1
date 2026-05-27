#include <iostream>

using namespace std;

// Prototipo de la función
int factorial(int n);

int main() {
    int numero = 5;
    int resultado;

    resultado = factorial(numero);
    
    // Se añadieron espacios en las comillas para separar el texto de las variables
    cout << "El factorial de " << numero << " es " << resultado << endl;

    return 0;
}

// Definición de la función (recursiva)
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
