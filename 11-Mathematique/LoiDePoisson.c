#include <stdio.h>
#include <math.h>

// Fonction pour calculer la formule de la factorielle :
unsigned long long factorielle(int n) {
    if (n == 0) return 1;
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Fonction pour calculer la probabilité selon la loi de Poisson :
double loi_de_poisson(double lambda, int k) {
    return (pow(lambda, k) * exp(-lambda)) / factorielle(k);
}
Fonction Main : 
int main() {
    double lambda;
    int k;

    // Lire la valeur de lambda :
    printf("Entrez la valeur de lambda (taux moyen d'occurrence) : ");
    scanf("%lf", &lambda);

    // Lire le nombre d'événements k :
    printf("Entrez le nombre d'événements k : ");
    scanf("%d", &k);

    // Calculer et afficher la probabilité :
    double probabilite = loi_de_poisson(lambda, k);
    printf("La probabilité de trouver %d événements avec une moyenne de %.2f est : %.10f\n", k, lambda, probabilite);

    return 0;
}
