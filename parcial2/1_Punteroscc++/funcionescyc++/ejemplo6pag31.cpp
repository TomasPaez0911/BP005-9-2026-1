#include <iostream>

using namespace std;


int sumarArreglo(int v[], int n);

int main() {
    int datos[5] = {4, 7, 2, 9, 5};
    int suma;

    suma = sumarArreglo(datos, 5);
    
   
    cout << "La suma del arreglo es: " << suma << endl;

    return 0;
}


int sumarArreglo(int v[], int n) {
    int suma = 0;
    
    for (int i = 0; i < n; i++) {
        suma = suma + v[i];
    }
    
    return suma;
}
