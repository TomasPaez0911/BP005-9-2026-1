#include <stdio.h> 
int main(void) { 
    int x = 5;   
    int *p = &x; 
  *p = 40;     
   printf("x = %d\n", x); 
 return 0; 
}
