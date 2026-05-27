#include <stdio.h>

/* PROTOTIPOS */
void leerMatriz(int m[][3], int filas);
void sumaFilas(int m[][3], int filas);

int main() {

    int m[3][3];

    leerMatriz(m, 3);
    sumaFilas(m, 3);

    return 0;
}

/* FUNCIONES */
void leerMatriz(int m[][3], int filas) {
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

void sumaFilas(int m[][3], int filas) {
    for(int i = 0; i < filas; i++) {
        int suma = 0;
        for(int j = 0; j < 3; j++) {
            suma += m[i][j];
        }
        printf("Fila %d: %d\n", i, suma);
    }
}
