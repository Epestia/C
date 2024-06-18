#include <stdio.h>

// Fonction pour calculer (a + b)^2
double produit_remarquable1(double a, double b) {
    return (a * a) + (2 * a * b) + (b * b);
}

// Fonction pour calculer (a - b)^2
double produit_remarquable2(double a, double b) {
    return (a * a) - (2 * a * b) + (b * b);
}

// Fonction pour calculer (a + b)(a - b)
double produit_remarquable3(double a, double b) {
    return (a * a) - (b * b);
}

int main() {
    double a, b;

    printf("Entrez la valeur de a : ");
    scanf("%lf", &a);

    printf("Entrez la valeur de b : ");
    scanf("%lf", &b);

    double result1 = produit_remarquable1(a, b);
    double result2 = produit_remarquable2(a, b);
    double result3 = produit_remarquable3(a, b);

    printf("(a + b)^2 = %.2f\n", result1);
    printf("(a - b)^2 = %.2f\n", result2);
    printf("(a + b)(a - b) = %.2f\n", result3);

    return 0;
}
