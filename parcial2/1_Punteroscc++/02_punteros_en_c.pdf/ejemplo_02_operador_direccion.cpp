#include <iostream>
int main() { 
    int x = 10;  

    std::cout << "Valor de x = " << x << std::endl;              
    std::cout << "Direccion de x = " << static_cast<void*>(&x) << std::endl;  
return 0; 
}
