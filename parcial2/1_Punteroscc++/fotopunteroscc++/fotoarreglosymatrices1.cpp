#include <iostream>

int main() {
    int numeros[5] = {4, 8, 15, 16, 23};

    for (int i = 0; i < 5; i++) {
        std::cout << "numeros[" << i << "] = " << numeros[i] << "\n";
    }

    return 0;
}
