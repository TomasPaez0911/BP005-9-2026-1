#include <iostream>

void figura7() {
    int fila = 1;
    int columna;

    do {
        columna = 1;

        do {
            std::cout << "= ";
            columna++;
        } while (columna <= 6);

        std::cout << "\n";
        fila++;
    } while (fila <= 3);
}

void figura8() {
    int fila = 1;
    int columna;

    do {
        columna = 1;

        do {
            std::cout << "$ ";
            columna++;
        } while (columna <= fila);

        std::cout << "\n";
        fila++;
    } while (fila <= 5);
}

int main() {
    figura7();
    std::cout << "\n";

    figura8();

    return 0;
}
