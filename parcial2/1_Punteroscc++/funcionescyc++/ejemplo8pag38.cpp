#include <iostream>

using namespace std;


int factorial(int n);

int main() {
    int numero = 5;
    int resultado;

    resultado = factorial(numero);
    
   
    cout << "El factorial de " << numero << " es " << resultado << endl;

    return 0;
}


int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
