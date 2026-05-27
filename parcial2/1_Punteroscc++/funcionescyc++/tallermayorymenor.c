#include <stdio.h>
void leerArreglo(int v[], int n);
int obtenerMayor(int v[], int n);
int obtenerMenor(int v[], int n);

int main() {

    int v[6];
    int mayor, menor;
leerArreglo(v, 6);

    mayor = obtenerMayor(v, 6);
    menor = obtenerMenor(v, 6);

    printf("Mayor: %d\n", mayor);
    printf("Menor: %d\n", menor);

    return 0;
}
void leerArreglo(int v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Digite el elemento %d: ", i);
        scanf("%d", &v[i]);
    }
}

int obtenerMayor(int v[], int n) {
    int mayor = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] > mayor)
            mayor = v[i];
    }
    return mayor;
}

int obtenerMenor(int v[], int n) {
    int menor = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] < menor)
            menor = v[i];
    }
    return menor;
}
