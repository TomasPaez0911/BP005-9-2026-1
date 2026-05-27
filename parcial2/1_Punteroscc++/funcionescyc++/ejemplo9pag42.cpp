#include <iostream>

using namespace std;
float area(float lado);
float area(float base, float altura);

int main() {
    float lado = 5.0;
    float base = 8.0;
    float altura = 3.0;
    float areaCuadrado;
    float areaRectangulo;

    areaCuadrado = area(lado);
    areaRectangulo = area(base, altura);
    cout << "Area del cuadrado: " << areaCuadrado << endl;
    cout << "Area del rectangulo: " << areaRectangulo << endl;

    return 0;
}
float area(float lado) {
    return lado * lado;
}

float area(float base, float altura) {
    return base * altura;
}
