#include <stdio.h>


void leerMatriz(int m[][3], int filas);
void mostrarMatriz(int m[][3], int filas);
int sumarMatriz(int m[][3], int filas);

int main() {

    int m[3][3];
    int suma;

    leerMatriz(m, 3);
    mostrarMatriz(m, 3);

    suma = sumarMatriz(m, 3);

    printf("Suma total: %d\n", suma);

    return 0;
}


void leerMatriz(int m[][3], int filas) {
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

void mostrarMatriz(int m[][3], int filas) {
    printf("Matriz:\n");
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int sumarMatriz(int m[][3], int filas) {
    int suma = 0;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < 3; j++) {
            suma += m[i][j];
        }
    }
    return suma;
}
