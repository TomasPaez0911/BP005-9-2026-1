#include <iostream>

using namespace std;

// Prototipos de funciones
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

    // 1. Asignación de un único bloque contiguo de memoria usando new[]
    // Se reserva un espacio total de (filas * columnas)
    int* matriz = new int[filas * columnas];

    // 2. Procesar la matriz pasando el puntero y las dimensiones a las funciones
    cout << "\n--- Llenando la Matriz ---" << endl;
    llenarMatriz(matriz, filas, columnas);

    cout << "\n--- Mostrando la Matriz Impresa en Forma de Tabla ---" << endl;
    mostrarMatriz(matriz, filas, columnas);

    // 3. Liberación de memoria usando delete[] de forma obligatoria
    delete[] matriz;
    matriz = nullptr; // Buena práctica en C++11 en adelante
    cout << "\nMemoria de la matriz liberada correctamente." << endl;

    return 0;
}

// Función para llenar la matriz usando la fórmula indexada i * columnas + j
void llenarMatriz(int* mat, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            // Formula requerida por la guía: mat[i * columnas + j]
            cin >> mat[i * columnas + j];
        }
    }
}

// Función para mostrar la matriz en formato bidimensional plano
void mostrarMatriz(int* mat, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            // Se calcula el índice lineal mediante la misma fórmula
            int indiceLineal = i * columnas + j;
            cout << mat[indiceLineal] << "\t";
        }
        cout << endl; // Salto de línea por cada fila terminada
    }
}
