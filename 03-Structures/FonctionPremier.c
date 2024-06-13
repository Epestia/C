#include <stdio.h>

int main() {
    // Déclaration des variables
    float a, b, x;

    // Demande de saisie des coefficients de l'équation
    printf("Entrez le coefficient a : ");
    scanf("%f", &a);
    printf("Entrez le coefficient b : ");
    scanf("%f", &b);

    // Calcul des racines de l'équation ax + b = 0
    if (a == 0) {
        if (b == 0) {
            printf("Tout reel est solution.\n");
        } else {
            printf("Aucune solution.\n");
        }
    } else {
        x = -b / a;
        printf("La solution de l'equation est : %.2f\n", x);
    }

    return 0;
}
