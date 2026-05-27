#include <stdio.h>


float calcularArea(float base, float altura);
float calcularPerimetro(float base, float altura);
void mostrarResultados(float area, float perimetro);

int main() {

    float base, altura;
    float area, perimetro;

    printf("Digite la base: ");
    scanf("%f", &base);

    printf("Digite la altura: ");
    scanf("%f", &altura);

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
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
}
