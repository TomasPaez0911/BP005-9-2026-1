#include <stdio.h>

void figura1() {
    int fila, columna;

    for (fila = 1; fila <= 5; fila++) {
        for (columna = 1; columna <= 5; columna++) {
            printf("* ");
        }
        printf("\n");
    }
}

void figura2() {
    int fila, columna;

    for (fila = 1; fila <= 4; fila++) {
        for (columna = 1; columna <= 8; columna++) {
            printf("# ");
        }
        printf("\n");
    }
}

void figura3() {
    int fila, columna;

    for (fila = 1; fila <= 5; fila++) {
        for (columna = 1; columna <= fila; columna++) {
            printf("@ ");
        }
        printf("\n");
    }
}

void figura4() {
    int fila, espacios, simbolos;

    for (fila = 1; fila <= 5; fila++) {
        for (espacios = 1; espacios <= 5 - fila; espacios++) {
            printf(" ");
        }

        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            printf("*");
        }

        printf("\n");
    }
}

void figura5() {
    int fila = 5;
    int columna;

    while (fila >= 1) {
        columna = 1;

        while (columna <= fila) {
            printf("+ ");
            columna++;
        }

        printf("\n");
        fila--;
    }
}

void figura6() {
    int fila = 1;
    int columna;

    while (fila <= 4) {
        columna = 1;

        while (columna <= 4) {
            printf("X ");
            columna++;
        }

        printf("\n");
        fila++;
    }
}

int main() {
    figura1();
    printf("\n");

    figura2();
    printf("\n");

    figura3();
    printf("\n");

    figura4();
    printf("\n");

    figura5();
    printf("\n");

    figura6();

    return 0;
}
