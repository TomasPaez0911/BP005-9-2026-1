#include <iostream>

int contadorGlobal = 0;

void contar() {
    int contadorLocalNormal = 0;
    static int contadorLocalEstatico = 0;

    contadorGlobal++;
    contadorLocalNormal++;
    contadorLocalEstatico++;

    std::cout << "Global = " << contadorGlobal << "\n";
    std::cout << "Local normal = " << contadorLocalNormal << "\n";
    std::cout << "Local static = " << contadorLocalEstatico << "\n";
    std::cout << "-----------------\n";
}

int main() {
    contar();
    contar();
    contar();

    return 0;
}
