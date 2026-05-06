#include <iostream>
using namespace std;

/* PROTOTIPOS */
void leerArreglo(int v[], int n);
int obtenerMayor(int v[], int n);
int obtenerMenor(int v[], int n);

int main() {

    /* DECLARACION DE VARIABLES */
    int v[6];
    int mayor, menor;

    /* ENTRADA */
    leerArreglo(v, 6);

    /* PROCESO */
    mayor = obtenerMayor(v, 6);
    menor = obtenerMenor(v, 6);

    /* SALIDA */
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}

/* DEFINICION DE FUNCIONES */

void leerArreglo(int v[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Digite el elemento " << i << ": ";
        cin >> v[i];
    }
}

int obtenerMayor(int v[], int n) {
    int mayor = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] > mayor) {
            mayor = v[i];
        }
    }
    return mayor;
}

int obtenerMenor(int v[], int n) {
    int menor = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] < menor) {
            menor = v[i];
        }
    }
    return menor;
}
