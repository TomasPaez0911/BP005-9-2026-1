#include <stdio.h>

// Prototipos de las funciones con nombres diferentes (Obligatorio en C)
float areaCuadrado(float lado);
float areaRectangulo(float base, float altura);

int main() {
    float lado = 5.0;
    float base = 8.0;
    float altura = 3.0;

    // Se añadieron espacios en los textos para una salida limpia en consola
    printf("Area del cuadrado: %.2f\n", areaCuadrado(lado));
    printf("Area del rectangulo: %.2f\n", areaRectangulo(base, altura));

    return 0;
}

// Definición de la función para el cuadrado
float areaCuadrado(float lado) {
    return lado * lado;
}

// Definición de la función para el rectángulo
float areaRectangulo(float base, float altura) {
    return base * altura;
}
