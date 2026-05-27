#include <iostream>
int sumar(int a, int b);

int main() {
    int resultado;

    resultado = sumar(4, 7);
    std::cout << "Resultado: " << resultado << "\n";

    return 0;
}
int sumar(int a, int b) {
    int r = a + b;
    return r;
}
