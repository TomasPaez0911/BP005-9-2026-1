#include <iostream>

using namespace std;

// Prototipo de la función
int sumarArreglo(int v[], int n);

int main() {
    int datos[5] = {4, 7, 2, 9, 5};
    int suma;

    suma = sumarArreglo(datos, 5);
    
    // Se añadió un espacio dentro de las comillas para separar el texto del número
    cout << "La suma del arreglo es: " << suma << endl;

    return 0;
}

// Definición de la función
int sumarArreglo(int v[], int n) {
    int suma = 0;
    
    for (int i = 0; i < n; i++) {
        suma = suma + v[i];
    }
    
    return suma;
}
