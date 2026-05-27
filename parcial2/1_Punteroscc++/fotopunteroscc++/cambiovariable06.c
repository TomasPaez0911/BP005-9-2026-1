#include <stdio.h>

void cambiarSinPuntero(int n) {
    n = 100; 
}

void cambiarConPuntero(int *p) {
    if (p != NULL) {
        *p = 100; 
    }
}

int main() {
    int x = 5;

  
    printf("Antes de cambiarSinPuntero: x = %d\n", x);
    cambiarSinPuntero(x);
    printf("Despues de cambiarSinPuntero: x = %d\n", x); 
    

    printf("\n"); 

   
    printf("Antes de cambiarConPuntero: x = %d\n", x);
    cambiarConPuntero(&x); 
    printf("Despues de cambiarConPuntero: x = %d\n", x);
    

    return 0;
}
