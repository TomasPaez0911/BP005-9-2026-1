#include <stdio.h>


int potencia(int base, int exponente);

int main() {

    
    int base, exponente, resultado;

  
    printf("Digite la base: ");
    scanf("%d", &base);

    printf("Digite el exponente: ");
    scanf("%d", &exponente);

    
    resultado = potencia(base, exponente);

    
    printf("%d elevado a %d es %d\n", base, exponente, resultado);

    return 0;
}


int potencia(int base, int exponente) {
    int resultado = 1;

    for(int i = 0; i < exponente; i++) {
        resultado = resultado * base;
    }

    return resultado;
}
