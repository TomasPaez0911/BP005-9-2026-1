#include <stdio.h>

void figura7() {
    int fila = 1;
    int columna;

    do {
        columna = 1;

        do {
            printf("= ");
            columna++;
        } while (columna <= 6);

        printf("\n");
        fila++;
    } while (fila <= 3);
}

void figura8() {
    int fila = 1;
    int columna;

    do {
        columna = 1;

        do {
            printf("$ ");
            columna++;
        } while (columna <= fila);

        printf("\n");
        fila++;
    } while (fila <= 5);
}

int main() {
    figura7();
    printf("\n");

    figura8();

    return 0;
}
