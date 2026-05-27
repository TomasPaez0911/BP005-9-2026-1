#include <iostream> 
int main() { 
    int x = 5;   
    int *p = &x; 
 *p = 40;     
   std::cout << "x = " << x << std::endl; 
    return 0;
}
