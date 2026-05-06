#include <iostream>
using namespace std;

/* PROTOTIPOS */
int factorialIterativo(int n);
int factorialRecursivo(int n);

int main() {

    int n;

    cout << "Digite un numero: ";
    cin >> n;

    cout << "Factorial iterativo: " << factorialIterativo(n) << endl;
    cout << "Factorial recursivo: " << factorialRecursivo(n) << endl;

    return 0;
}

/* FUNCIONES */
int factorialIterativo(int n) {
    int r = 1;
    for(int i = 1; i <= n; i++) {
        r *= i;
    }
    return r;
}

int factorialRecursivo(int n) {
    if(n == 0)
        return 1;
    else
        return n * factorialRecursivo(n - 1);
}
