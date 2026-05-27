#include <stdio.h>


float convertirAFahrenheit(float celsius);

int main() {

   
    float celsius;
    float fahrenheit;

 
    printf("Digite la temperatura en Celsius: ");
    scanf("%f", &celsius);

   
    fahrenheit = convertirAFahrenheit(celsius);

 
    printf("Temperatura en Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}


float convertirAFahrenheit(float celsius) {
    return (9.0/5.0) * celsius + 32;
}
