#include <iostream>

using namespace std;


void llenarMatriz(int* mat, int filas, int columnas);
void mostrarMatriz(int* mat, int filas, int columnas);

int main() {
    int filas, columnas;

    cout << "=== PROGRAMA 2: MATRIZ DINAMICA LINEALIZADA EN C++ ===" << endl;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        cout << "Dimensiones no validas." << endl;
        return 1;
    }

  
    int* matriz = new int[filas * columnas];

   
    cout << "\n--- Llenando la Matriz ---" << endl;
    llenarMatriz(matriz, filas, columnas);

    cout << "\n--- Mostrando la Matriz Impresa en Forma de Tabla ---" << endl;
    mostrarMatriz(matriz, filas, columnas);

  
    delete[] matriz;
    matriz = nullptr; 
    cout << "\nMemoria de la matriz liberada correctamente." << endl;

    return 0;
}

void llenarMatriz(int* mat, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
          
            cin >> mat[i * columnas + j];
        }
    }
}


void mostrarMatriz(int* mat, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
           
            int indiceLineal = i * columnas + j;
            cout << mat[indiceLineal] << "\t";
        }
        cout << endl; 
    }
}
