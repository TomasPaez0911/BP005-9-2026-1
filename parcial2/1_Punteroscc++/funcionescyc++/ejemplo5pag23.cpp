#include <iostream>

using namespace std;


int potencia(int base, int exponente);

int main() {
    int base = 2;
    int exponente = 4;
    int resultado;

    resultado = potencia(base, exponente);
    

    cout << base << " elevado a " << exponente << " es " << resultado << endl;

    return 0;
}


int potencia(int base, int exponente) {
    int resultado = 1;
    
    for (int i = 0; i < exponente; i++) {
        resultado = resultado * base;
    }
    
    return resultado;
}
