#include <iostream>
void cambiarSinPuntero(int n) {
    n = 100; 
}

void cambiarConPuntero(int *p) {
    if (p != nullptr) { 
        *p = 100; 
    }
}
int main() {
    int x = 5;

    std::cout << "Antes de cambiarSinPuntero: x = " << x << "\n";
    cambiarSinPuntero(x);
    std::cout << "Despues de cambiarSinPuntero: x = " << x << "\n\n"; 

    std::cout << "Antes de cambiarConPuntero: x = " << x << "\n";
    cambiarConPuntero(&x); 
    std::cout << "Despues de cambiarConPuntero: x = " << x << "\n"; 

    return 0;
}
