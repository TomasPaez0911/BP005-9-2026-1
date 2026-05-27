#include <iostream>
using namespace std;

/* PROTOTIPOS */
void leerNotas(float notas[], int n);
float obtenerMayor(float notas[], int n);
float obtenerMenor(float notas[], int n);
float calcularPromedioNotas(float notas[], int n);
int contarAprobadas(float notas[], int n);
int contarNoAprobadas(float notas[], int n);
void mostrarReporte(float mayor, float menor, float promedio, int aprobadas, int noAprobadas);

int main() {

    float notas[5];
    float mayor, menor, promedio;
    int aprobadas, noAprobadas;

    leerNotas(notas, 5);

    mayor = obtenerMayor(notas, 5);
    menor = obtenerMenor(notas, 5);
    promedio = calcularPromedioNotas(notas, 5);
    aprobadas = contarAprobadas(notas, 5);
    noAprobadas = contarNoAprobadas(notas, 5);

    mostrarReporte(mayor, menor, promedio, aprobadas, noAprobadas);

    return 0;
}

/* FUNCIONES */

void leerNotas(float notas[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Digite la nota " << i << ": ";
        cin >> notas[i];
    }
}

float obtenerMayor(float notas[], int n) {
    float mayor = notas[0];
    for(int i = 1; i < n; i++) {
        if(notas[i] > mayor) {
            mayor = notas[i];
        }
    }
    return mayor;
}

float obtenerMenor(float notas[], int n) {
    float menor = notas[0];
    for(int i = 1; i < n; i++) {
        if(notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}

float calcularPromedioNotas(float notas[], int n) {
    float suma = 0;
    for(int i = 0; i < n; i++) {
        suma += notas[i];
    }
    return suma / n;
}

int contarAprobadas(float notas[], int n) {
    int contador = 0;
    for(int i = 0; i < n; i++) {
        if(notas[i] >= 3.0) {
            contador++;
        }
    }
    return contador;
}

int contarNoAprobadas(float notas[], int n) {
    int contador = 0;
    for(int i = 0; i < n; i++) {
        if(notas[i] < 3.0) {
            contador++;
        }
    }
    return contador;
}

void mostrarReporte(float mayor, float menor, float promedio, int aprobadas, int noAprobadas) {
    cout << "\nReporte final" << endl;
    cout << "Nota mayor: " << mayor << endl;
    cout << "Nota menor: " << menor << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Aprobadas: " << aprobadas << endl;
    cout << "No aprobadas: " << noAprobadas << endl;
}
