#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    // Lire la température en Celsius
    printf("Entrez la température en Celsius : ");
    scanf("%lf", &celsius);

    // Convertir en Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Afficher la température en Fahrenheit
    printf("La température en Fahrenheit est : %.2lf\n", fahrenheit);

    // Lire la température en Fahrenheit
    printf("Entrez la température en Fahrenheit : ");
    scanf("%lf", &fahrenheit);

    // Convertir en Celsius
    celsius = (fahrenheit - 32) * 5/9;

    // Afficher la température en Celsius
    printf("La température en Celsius est : %.2lf\n", celsius);

    return 0;
}
