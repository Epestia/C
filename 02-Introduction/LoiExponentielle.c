#include <stdio.h>
#include <math.h>

// Fonction pour calculer la densité de probabilité d'une loi exponentielle
double densite_exponentielle(double x, double lambda) {
    if (x < 0) {
        return 0.0; // La densité de probabilité est nulle pour x < 0
    }
    return lambda * exp(-lambda * x);
}

int main() {
    double lambda, x;

    // Lire le taux (lambda) de la loi exponentielle
    printf("Entrez le taux (lambda) de la loi exponentielle : ");
    scanf("%lf", &lambda);

    // Lire la valeur pour laquelle on veut calculer la densité de probabilité
    printf("Entrez la valeur pour calculer la densité de probabilité : ");
    scanf("%lf", &x);

    // Calculer la densité de probabilité
    double densite = densite_exponentielle(x, lambda);

    // Afficher le résultat
    printf("La densité de probabilité pour x = %.2f avec lambda = %.2f est : %.6f\n", x, lambda, densite);

    return 0;
}
