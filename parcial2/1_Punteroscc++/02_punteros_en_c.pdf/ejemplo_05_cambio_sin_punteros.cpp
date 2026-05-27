#include <iostream> 
void cambiar(int n) { 
    n = 100; 
    std::cout << "Dentro de cambiar: n = " << n << std::endl; 
}
int main() { 
    int x = 5; 
    std::cout << "Antes: x = " << x << std::endl; 
    cambiar(x); 
    std::cout << "Despues: x = " << x << std::endl; /
    return 0; 
}
