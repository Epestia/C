#include <stdio.h>
#include <math.h>

// Fonction pour calculer la densité de probabilité d'une loi normale :
double densite_normale(double x, double mu, double sigma) {
    return exp(-pow(x - mu, 2) / (2 * pow(sigma, 2))) / (sigma * sqrt(2 * M_PI));
}

int main() {
    double mu, sigma, x;

    // Lire la moyenne (mu) et l'écart type (sigma) :
    printf("Entrez la moyenne (mu) : ");
    scanf("%lf", &mu);
    printf("Entrez l'écart type (sigma) : ");
    scanf("%lf", &sigma);

    // Lire la valeur pour laquelle on veut calculer la densité de probabilité :
    printf("Entrez la valeur pour calculer la densité de probabilité : ");
    scanf("%lf", &x);

    // Calculer la densité de probabilité :
    double densite = densite_normale(x, mu, sigma);

    // Afficher le résultat
    printf("La densité de probabilité pour x = %.2f avec mu = %.2f et sigma = %.2f est : %.6f\n", x, mu, sigma, densite);

    return 0;
}
