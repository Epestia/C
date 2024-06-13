#include <stdio.h>

int main() {
    // Déclaration des variables
    int n;
    double s = 0.0;

    // Demande à l'utilisateur d'entrer un entier n
    printf("Entrez un entier n : ");
    scanf("%d", &n);

    // Calcul de la somme s = 1 + 1/2 + 1/3 + ... + 1/n
    for (int i = 1; i <= n; i++) {
        s += 1.0 / i; // Ajoute 1/i à la somme s (notez l'utilisation de 1.0 pour assurer la division réelle)
    }

    // Affichage du résultat
    printf("La somme 1 + 1/2 + 1/3 + ... + 1/%d est : %.6f\n", n, s);

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer une variable 'n' pour stocker l'entier saisi par l'utilisateur.
2. Déclarer une variable 's' de type double pour stocker la somme des fractions.
3. Afficher un message demandant à l'utilisateur d'entrer un entier n.
4. Lire et stocker l'entier saisi dans la variable 'n'.
5. Initialiser la variable 's' à 0.0 pour accumuler la somme.
6. Répéter les étapes suivantes pour chaque entier i de 1 à n :
7.     Ajouter 1/i à la somme s (utiliser 1.0 pour la division réelle).
8. Afficher la somme calculée s avec une précision de six chiffres après la virgule.
9. Fin du programme.
*/
