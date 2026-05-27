#include <iostream>

int main() {
    int x = 25;
    int *p = &x;

    std::cout << "x  = " << x << "\n";
    std::cout << "&x = " << &x << "\n";  // C++ detecta que es una dirección y la imprime en hexadecimal
    std::cout << "p  = " << p << "\n";   // Lo mismo aquí, no hace falta el cast a (void*)
    std::cout << "*p = " << *p << "\n";  // Accedemos al valor apuntado (desreferenciación)

    return 0;
}
