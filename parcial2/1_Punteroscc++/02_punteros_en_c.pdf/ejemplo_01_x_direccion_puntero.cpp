#include <iostream> 
int main() { 
    int x = 25;       
    int *p = &x;      
    std::cout << "x = " << x << std::endl;                                 
    std::cout << "&x = " << static_cast<void*>(&x) << std::endl;           
    std::cout << "p = " << static_cast<void*>(p) << std::endl;             
    std::cout << "*p = " << *p << std::endl;                               
    return 0;
}
