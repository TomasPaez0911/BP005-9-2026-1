#include <iostream>
using namespace std;

void leerMatriz(int m[][3], int filas);
void mostrarMatriz(int m[][3], int filas);
int sumarMatriz(int m[][3], int filas);

int main() {

    int m[3][3];
    int suma;

    leerMatriz(m, 3);
    mostrarMatriz(m, 3);

    suma = sumarMatriz(m, 3);

    cout << "Suma total: " << suma << endl;

    return 0;
}


void leerMatriz(int m[][3], int filas) {
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Digite m[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

void mostrarMatriz(int m[][3], int filas) {
    cout << "Matriz:\n";
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < 3; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int sumarMatriz(int m[][3], int filas) {
    int suma = 0;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < 3; j++) {
            suma += m[i][j];
        }
    }
    return suma;
}
