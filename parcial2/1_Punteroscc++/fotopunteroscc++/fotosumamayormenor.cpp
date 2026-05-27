#include <iostream>

// Usamos referencias (&) en lugar de punteros (*)
void analizar(int v[], int n, int &suma, int &mayor, int &menor) {
    suma = 0;
    mayor = v[0];
    menor = v[0];

    for (int i = 0; i < n; i++) {
        suma = suma + v[i];

        if (v[i] > mayor) {
            mayor = v[i];
        }

        if (v[i] < menor) {
            menor = v[i];
        }
    }
}

int main() {
    int datos[5] = {8, 3, 15, 6, 10};
    int suma, mayor, menor;

    // Ya no es necesario anteponer el '&' a las variables
    analizar(datos, 5, suma, mayor, menor);

    std::cout << "Suma  = " << suma << "\n";
    std::cout << "Mayor = " << mayor << "\n";
    std::cout << "Menor = " << menor << "\n";

    return 0;
}
