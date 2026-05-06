#include <stdio.h>

/* PROTOTIPOS */
int potencia(int base, int exponente);

int main() {

    /* VARIABLES */
    int base, exponente, resultado;

    /* ENTRADA */
    printf("Digite la base: ");
    scanf("%d", &base);

    printf("Digite el exponente: ");
    scanf("%d", &exponente);

    /* PROCESO */
    resultado = potencia(base, exponente);

    /* SALIDA */
    printf("%d elevado a %d es %d\n", base, exponente, resultado);

    return 0;
}

/* FUNCIONES */
int potencia(int base, int exponente) {
    int resultado = 1;

    for(int i = 0; i < exponente; i++) {
        resultado = resultado * base;
    }

    return resultado;
}
