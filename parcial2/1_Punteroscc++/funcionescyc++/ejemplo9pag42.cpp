#include <iostream>

using namespace std;

// Prototipos de las funciones (Sobrecarga)
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

    // Se añadieron espacios en el texto para que la salida sea legible
    cout << "Area del cuadrado: " << areaCuadrado << endl;
    cout << "Area del rectangulo: " << areaRectangulo << endl;

    return 0;
}

// Definición de la función para el cuadrado
float area(float lado) {
    return lado * lado;
}

// Definición de la función para el rectangulo
float area(float base, float altura) {
    return base * altura;
}
