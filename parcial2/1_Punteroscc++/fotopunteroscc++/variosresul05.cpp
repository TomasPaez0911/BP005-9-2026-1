#include <iostream>

// Cambiamos los punteros (*) por referencias (&) para los valores que queremos calcular y devolver
void analizarNumeros(int a, int b, int c, int &suma, int &mayor, int &menor) {
    suma = a + b + c;

    mayor = a;
    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }

    menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
}

int main() {
    int x = 8;
    int y = 3;
    int z = 15;

    int suma;
    int mayor;
    int menor;

    // Al usar referencias, ya no pasamos las direcciones con '&'. Pasamos las variables directamente.
    analizarNumeros(x, y, z, suma, mayor, menor);

    std::cout << "Suma  = " << suma << "\n";
    std::cout << "Mayor = " << mayor << "\n";
    std::cout << "Menor = " << menor << "\n";

    return 0;
}
