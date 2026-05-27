#include <iostream>
using namespace std;


float calcularArea(float base, float altura);
float calcularPerimetro(float base, float altura);
void mostrarResultados(float area, float perimetro);

int main() {

    float base, altura;
    float area, perimetro;

    cout << "Digite la base: ";
    cin >> base;

    cout << "Digite la altura: ";
    cin >> altura;

    area = calcularArea(base, altura);
    perimetro = calcularPerimetro(base, altura);

    mostrarResultados(area, perimetro);

    return 0;
}

float calcularArea(float base, float altura) {
    return base * altura;
}

float calcularPerimetro(float base, float altura) {
    return 2 * (base + altura);
}

void mostrarResultados(float area, float perimetro) {
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;
}
