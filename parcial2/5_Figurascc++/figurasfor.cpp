#include <iostream>

void figura1() {
    int fila, columna;

    for (fila = 1; fila <= 5; fila++) {
        for (columna = 1; columna <= 5; columna++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

void figura2() {
    int fila, columna;

    for (fila = 1; fila <= 4; fila++) {
        for (columna = 1; columna <= 8; columna++) {
            std::cout << "# ";
        }
        std::cout << "\n";
    }
}

void figura3() {
    int fila, columna;

    for (fila = 1; fila <= 5; fila++) {
        for (columna = 1; columna <= fila; columna++) {
            std::cout << "@ ";
        }
        std::cout << "\n";
    }
}

void figura4() {
    int fila, espacios, simbolos;

    for (fila = 1; fila <= 5; fila++) {
        for (espacios = 1; espacios <= 5 - fila; espacios++) {
            std::cout << " ";
        }

        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            std::cout << "*";
        }

        std::cout << "\n";
    }
}

void figura5() {
    int fila = 5;
    int columna;

    while (fila >= 1) {
        columna = 1;

        while (columna <= fila) {
            std::cout << "+ ";
            columna++;
        }

        std::cout << "\n";
        fila--;
    }
}

void figura6() {
    int fila = 1;
    int columna;

    while (fila <= 4) {
        columna = 1;

        while (columna <= 4) {
            std::cout << "X ";
            columna++;
        }

        std::cout << "\n";
        fila++;
    }
}

int main() {
    figura1();
    std::cout << "\n";

    figura2();
    std::cout << "\n";

    figura3();
    std::cout << "\n";

    figura4();
    std::cout << "\n";

    figura5();
    std::cout << "\n";

    figura6();

    return 0;
}
