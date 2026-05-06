#include <iostream>
using namespace std;

/* PROTOTIPOS */
int potencia(int base, int exponente);

int main() {

    int base, exponente, resultado;

    cout << "Digite la base: ";
    cin >> base;

    cout << "Digite el exponente: ";
    cin >> exponente;

    resultado = potencia(base, exponente);

    cout << base << " elevado a " << exponente << " es " << resultado << endl;

    return 0;
}

/* FUNCIONES */
int potencia(int base, int exponente) {
    int resultado = 1;

    for(int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    return resultado;
}
