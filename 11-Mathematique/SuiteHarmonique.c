#include <stdio.h>

int main() {
    int n;
    double somme = 0.0;

    // Demande de l'entrée utilisateur
    printf("Entrez le nombre de termes pour la suite harmonique : ");
    scanf("%d", &n);

    // Calcul de la suite harmonique
    for (int i = 1; i <= n; i++) {
        somme += 1.0 / i;
    }

    // Affichage du résultat
    printf("La somme de la suite harmonique pour %d termes est : %.5f\n", n, somme);

    return 0;
}
