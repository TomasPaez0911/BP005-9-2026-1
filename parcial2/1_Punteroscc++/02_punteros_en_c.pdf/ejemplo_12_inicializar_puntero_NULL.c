#include <stdio.h>  
#include <stddef.h> 

int main(void) {
    int *p = NULL; 

    if (p != NULL) { 
        printf("Valor = %d\n", *p);
    } else {
        printf("p no apunta a una direccion valida.\n");
    }

    return 0; 
}
