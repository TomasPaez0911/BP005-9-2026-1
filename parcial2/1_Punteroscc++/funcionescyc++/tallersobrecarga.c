se realiza segun el archivo taller de la siguiente forma:
Este programa debe hacerse en C++. En C no se debe intentar usar sobrecarga con el mismo nombre de función.
Si se desea hacer una versión en C, se deben usar nombres diferentes, por ejemplo: areaCuadrado, areaRectangulo y areaTrapecio.
en caso de usar nombre distintos:

#include <stdio.h>

/* PROTOTIPOS */
float areaCuadrado(float lado);
float areaRectangulo(float base, float altura);
float areaTrapecio(float baseMayor, float baseMenor, float altura);

int main() {

    float lado;
    float base, altura;
    float baseMayor, baseMenor, alturaTrapecio;

    printf("Digite el lado del cuadrado: ");
    scanf("%f", &lado);

    printf("Digite la base del rectangulo: ");
    scanf("%f", &base);
    printf("Digite la altura del rectangulo: ");
    scanf("%f", &altura);

    printf("Digite la base mayor del trapecio: ");
    scanf("%f", &baseMayor);
    printf("Digite la base menor del trapecio: ");
    scanf("%f", &baseMenor);
    printf("Digite la altura del trapecio: ");
    scanf("%f", &alturaTrapecio);

    printf("Area del cuadrado: %.2f\n", areaCuadrado(lado));
    printf("Area del rectangulo: %.2f\n", areaRectangulo(base, altura));
    printf("Area del trapecio: %.2f\n", areaTrapecio(baseMayor, baseMenor, alturaTrapecio));

    return 0;
}

/* FUNCIONES */

float areaCuadrado(float lado) {
    return lado * lado;
}

float areaRectangulo(float base, float altura) {
    return base * altura;
}

float areaTrapecio(float baseMayor, float baseMenor, float altura) {
    return ((baseMayor + baseMenor) * altura) / 2;
}
