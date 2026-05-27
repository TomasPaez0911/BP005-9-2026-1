#include <stdio.h>


int factorialIterativo(int n);
int factorialRecursivo(int n);

int main() {

    int n;

    printf("Digite un numero: ");
    scanf("%d", &n);

    printf("Factorial iterativo: %d\n", factorialIterativo(n));
    printf("Factorial recursivo: %d\n", factorialRecursivo(n));

    return 0;
}


int factorialIterativo(int n) {
    int r = 1;
    for(int i = 1; i <= n; i++) {
        r *= i;
    }
    return r;
}

int factorialRecursivo(int n) {
    if(n == 0)
        return 1;
    else
        return n * factorialRecursivo(n - 1);
}
