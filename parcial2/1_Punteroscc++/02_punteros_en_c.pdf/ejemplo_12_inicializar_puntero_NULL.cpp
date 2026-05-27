#include <iostream> 
int main() { 
    int *p = nullptr; 

    if (p != nullptr) { 
        std::cout << "Valor = " << *p << std::endl; 
    } else {
        std::cout << "p no apunta a una direccion valida." << std::endl;
    }

    return 0; 
}
