#include <stdio.h>
#include <math.h>

int main() {
    // Déclaration des variables
    float a, b, c;
    float discriminant, x1, x2;

    // Demande de saisie des coefficients de l'équation
    printf("Entrez le coefficient a : ");
    scanf("%f", &a);
    printf("Entrez le coefficient b : ");
    scanf("%f", &b);
    printf("Entrez le coefficient c : ");
    scanf("%f", &c);

    // Calcul du discriminant
    discriminant = b * b - 4 * a * c;

    // Calcul des racines de l'équation ax^2 + bx + c = 0
    if (discriminant < 0) {
        printf("Pas de solution reelle (racines imaginaires).\n");
    } else if (discriminant == 0) {
        x1 = x2 = -b / (2 * a);
        printf("Solution double : x1 = x2 = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Deux solutions : x1 = %.2f et x2 = %.2f\n", x1, x2);
    }

    return 0;
}
