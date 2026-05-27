#include <iostream>

using namespace std;

// Prototipo de la función
void mostrarArea(float base, float altura);

int main() {
    float base = 8.0;
    float altura = 3.5;

    mostrarArea(base, altura);

    return 0;
}

// Definición de la función
void mostrarArea(float base, float altura) {
    float area;
    area = base * altura;

    cout << "Base: " << base << endl;
    cout << "Altura: " << altura << endl;
    cout << "Area del rectangulo: " << area << endl;
}
