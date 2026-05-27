#include <iostream>

using namespace std;
void mostrarArea(float base, float altura);

int main() {
    float base = 8.0;
    float altura = 3.5;

    mostrarArea(base, altura);

    return 0;
}

void mostrarArea(float base, float altura) {
    float area;
    area = base * altura;

    cout << "Base: " << base << endl;
    cout << "Altura: " << altura << endl;
    cout << "Area del rectangulo: " << area << endl;
}
