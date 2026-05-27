#include <iostream>

// En C++ usamos referencias (&) en lugar de punteros (*)
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    std::cout << "Antes: x = " << x << ", y = " << y << "\n";
    
    // Ya no necesitas poner el "&" al llamar a la función
    intercambiar(x, y);
    
    std::cout << "Despues: x = " << x << ", y = " << y << "\n";

    return 0;
}
