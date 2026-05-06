#include <stdio.h>

/* PROTOTIPOS */
int esAprobado(float nota);
void mostrarMensaje(float nota, int resultado);

int main() {

    float nota;
    int resultado;

    printf("Digite la nota: ");
    scanf("%f", &nota);

    resultado = esAprobado(nota);
    mostrarMensaje(nota, resultado);

    return 0;
}

int esAprobado(float nota) {
    if(nota >= 3.0)
        return 1;
    else
        return 0;
}

void mostrarMensaje(float nota, int resultado) {
    if(resultado == 1)
        printf("La nota %.2f es aprobatoria\n", nota);
    else
        printf("La nota %.2f NO es aprobatoria\n", nota);
}
