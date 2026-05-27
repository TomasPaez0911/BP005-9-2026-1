#include <iostream>
using namespace std;


void leerArreglo(int v[], int n);
void mostrarArreglo(int v[], int n);
int sumarArreglo(int v[], int n);
float calcularPromedio(int suma, int n);

int main() {

    int v[5];
    int suma;
    float promedio;

    leerArreglo(v, 5);
    mostrarArreglo(v, 5);

    suma = sumarArreglo(v, 5);
    promedio = calcularPromedio(suma, 5);

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}


void leerArreglo(int v[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Digite el elemento " << i << ": ";
        cin >> v[i];
    }
}

void mostrarArreglo(int v[], int n) {
    cout << "Elementos del arreglo:\n";
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int sumarArreglo(int v[], int n) {
    int suma = 0;
    for(int i = 0; i < n; i++) {
        suma += v[i];
    }
    return suma;
}

float calcularPromedio(int suma, int n) {
    return (float)suma / n;
}
