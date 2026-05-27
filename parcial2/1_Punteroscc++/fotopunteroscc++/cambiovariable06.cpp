#include <iostream>

// Paso por valor: 'n' es una copia local. El cambio no afecta a 'x'.
void cambiarSinPuntero(int n) {
    n = 100; 
}

// Paso por dirección: usa un puntero para modificar la variable original.
void cambiarConPuntero(int *p) {
    if (p != nullptr) { // En C++ moderno usamos nullptr en lugar de NULL
        *p = 100; 
    }
}

int main() {
    int x = 5;

    std::cout << "Antes de cambiarSinPuntero: x = " << x << "\n";
    cambiarSinPuntero(x);
    std::cout << "Despues de cambiarSinPuntero: x = " << x << "\n\n"; 

    std::cout << "Antes de cambiarConPuntero: x = " << x << "\n";
    cambiarConPuntero(&x); // Pasamos la dirección de memoria de x
    std::cout << "Despues de cambiarConPuntero: x = " << x << "\n"; 

    return 0;
}
