#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamano del rombo: ";
    cin >> n;

   
    for (int fila = 1; fila <= n; fila++) {
        for (int espacios = 1; espacios <= n - fila; espacios++) {
            cout << " ";
        }
        for (int simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            cout << "*";
        }
        cout << "\n";
    }

   
    for (int fila = n - 1; fila >= 1; fila--) {
        for (int espacios = 1; espacios <= n - fila; espacios++) {
            cout << " ";
        }
        for (int simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
