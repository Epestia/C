#include <stdio.h>
#include <stdbool.h> // Pour utiliser le type bool et les valeurs true/false

bool estPremier(int nombre) {
    if (nombre <= 1) {
        return false; // Les nombres <= 1 ne sont pas premiers
    }
    for (int i = 2; i * i <= nombre; ++i) {
        if (nombre % i == 0) {
            return false; // Si nombre est divisible par i, alors il n'est pas premier
        }
    }
    return true; // Si aucun diviseur trouvé, nombre est premier
}

int main() {
    // Déclaration des variables
    int n;
    int nbNombresPremiers = 0;

    // Lecture de n
    printf("Entrez un nombre n : ");
    scanf("%d", &n);

    // Calcul du nombre de nombres premiers entre 1 et n
    for (int i = 2; i <= n; ++i) {
        if (estPremier(i)) {
            nbNombresPremiers++;
        }
    }

    // Affichage du résultat
    printf("Il y a %d nombres premiers entre 1 et %d.\n", nbNombresPremiers, n);

    return 0;
}
