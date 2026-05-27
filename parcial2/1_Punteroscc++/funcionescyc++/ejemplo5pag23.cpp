#include <iostream>

using namespace std;

// Prototipo de la función
int potencia(int base, int exponente);

int main() {
    int base = 2;
    int exponente = 4;
    int resultado;

    resultado = potencia(base, exponente);
    
    // Se añadieron espacios entre las comillas para separar el texto de las variables
    cout << base << " elevado a " << exponente << " es " << resultado << endl;

    return 0;
}

// Definición de la función
int potencia(int base, int exponente) {
    int resultado = 1;
    
    for (int i = 0; i < exponente; i++) {
        resultado = resultado * base;
    }
    
    return resultado;
}
