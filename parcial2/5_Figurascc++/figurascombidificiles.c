#include <stdio.h>

void figura9() {
    int fila, columna;

    for (fila = 1; fila <= 5; fila++) {
        for (columna = 1; columna <= 8; columna++) {
            if ((fila + columna) % 2 == 0) {
                printf("* ");
            } else {
                printf("o ");
            }
        }
        printf("\n");
    }
}

void figura10() {
    int fila, espacios, simbolos;
    int n = 5;

    for (fila = 1; fila <= n; fila++) {
        for (espacios = 1; espacios <= n - fila; espacios++) {
            printf(" ");
        }
        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            printf("*");
        }
        printf("\n");
    }

    for (fila = n - 1; fila >= 1; fila--) {
        for (espacios = 1; espacios <= n - fila; espacios++) {
            printf(" ");
        }
        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            printf("*");
        }
        printf("\n");
    }
}

void figura11() {
    int fila, columna;
    int n = 5;
    int ancho = 2 * n - 1;

    for (fila = 1; fila <= ancho; fila++) {
        int distancia = fila <= n ? n - fila : fila - n;

        for (columna = 1; columna <= ancho; columna++) {
            if (columna == distancia + 1 || columna == ancho - distancia) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void figura12() {
    int fila = 5;
    int espacios, simbolos;

    while (fila >= 1) {
        espacios = 5 - fila;
        while (espacios > 0) {
            printf(" ");
            espacios--;
        }

        simbolos = 2 * fila - 1;
        while (simbolos > 0) {
            printf("@");
            simbolos--;
        }
        printf("\n");
        fila--;
    }

    fila = 2;
    while (fila <= 5) {
        espacios = 5 - fila;
        while (espacios > 0) {
            printf(" ");
            espacios--;
        }

        simbolos = 2 * fila - 1;
        while (simbolos > 0) {
            printf("@");
            simbolos--;
        }
        printf("\n");
        fila++;
    }
}

void figura13() {
    int fila, espacios, numero;
    int n = 5;

    for (fila = 1; fila <= n; fila++) {
        for (espacios = 1; espacios <= n - fila; espacios++) {
            printf(" ");
        }

        for (numero = 1; numero <= fila; numero++) {
            printf(" %d ", numero);
        }

        for (numero = fila - 1; numero >= 1; numero--) {
            printf(" %d ", numero);
        }

        printf("\n");
    }
}

void figura14() {
    int fila, columna;

    for (fila = 1; fila <= 11; fila++) {
        for (columna = 1; columna <= 11; columna++) {
            if ((fila == 1 && (columna == 3 || columna == 9)) ||
                (fila == 2 && (columna == 4 || columna == 8)) ||
                (fila == 3 && (columna >= 4 && columna <= 8)) ||
                (fila == 4 && (columna >= 2 && columna <= 10)) ||
                (fila == 5 && (columna >= 3 && columna <= 9)) ||
                (fila == 6 && (columna >= 4 && columna <= 8)) ||
                (fila == 7 && (columna == 2 || columna == 10 || columna == 6)) ||
                (fila == 8 && (columna == 3 || columna == 9 || columna == 6)) ||
                (fila == 9 && (columna == 4 || columna == 8 || columna == 6)) ||
                (fila == 10 && (columna == 5 || columna == 7)) ||
                (fila == 11 && columna == 6)) {
                printf("o");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void figura15() {
    int fila = 1;
    int columna;
    int n = 9;
    int centro = 5;

    do {
        columna = 1;
        do {
            if (fila == centro || columna == centro) {
                printf("+");
            } else {
                printf(" ");
            }
            columna++;
        } while (columna <= n);

        printf("\n");
        fila++;
    } while (fila <= n);
}

int main() {

    figura9();
    printf("\n");

    figura10();
    printf("\n");

    figura11();
    printf("\n");

    figura12();
    printf("\n");

    figura13();
    printf("\n");

    figura14();
    printf("\n");

    figura15();

    return 0;
}
