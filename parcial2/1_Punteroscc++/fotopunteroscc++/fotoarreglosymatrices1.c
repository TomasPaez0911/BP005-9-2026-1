#include <stdio.h>

int main() {
    int numeros[5] = {4, 8, 15, 16, 23};
    int i;

    for (i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}
