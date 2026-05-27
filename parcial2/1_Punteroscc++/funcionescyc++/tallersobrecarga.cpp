#include <iostream>
using namespace std;
float area(float lado);
float area(float base, float altura);
float area(float baseMayor, float baseMenor, float altura);

int main() {

    
    float lado;
    float base, altura;
    float baseMayor, baseMenor, alturaTrapecio;


    cout << "Digite el lado del cuadrado: ";
    cin >> lado;

    cout << "Digite la base del rectangulo: ";
    cin >> base;
    cout << "Digite la altura del rectangulo: ";
    cin >> altura;

    cout << "Digite la base mayor del trapecio: ";
    cin >> baseMayor;
    cout << "Digite la base menor del trapecio: ";
    cin >> baseMenor;
    cout << "Digite la altura del trapecio: ";
    cin >> alturaTrapecio;

  
    cout << "Area del cuadrado: " << area(lado) << endl;
    cout << "Area del rectangulo: " << area(base, altura) << endl;
    cout << "Area del trapecio: " << area(baseMayor, baseMenor, alturaTrapecio) << endl;

    return 0;
}



float area(float lado) {
    return lado * lado;
}

float area(float base, float altura) {
    return base * altura;
}

float area(float baseMayor, float baseMenor, float altura) {
    return ((baseMayor + baseMenor) * altura) / 2;
}
