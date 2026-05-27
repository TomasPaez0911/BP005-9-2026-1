#include <iostream>

using namespace std;

// Prototipo de la función
int sumarMatriz(int m[][3], int filas);

int main() {
    // Declaración de la matriz en forma de cuadrícula de 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int suma;
    suma = sumarMatriz(matriz, 3);
    
    cout << "La suma de la matriz es: " << suma << endl;
    
    return 0;
}

// Definición de la función
int sumarMatriz(int m[][3], int filas) {
    int suma = 0;
    
    // Ciclos anidados para recorrer filas (i) y columnas (j)
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < 3; j++) {
            suma = suma + m[i][j];
        }
    }
    
    return suma;
}
