#include <stdio.h>

int main() {
    // Déclaration des variables
    int n, s = 0;

    // Demande à l'utilisateur d'entrer un entier n
    printf("Entrez un entier n : ");
    scanf("%d", &n);

    // Calcul de la somme s = 1 + 3 + 5 + ... + 2 * n + 1
    for (int i = 0; i <= n; i++) {
        s += 2 * i + 1; // Ajoute 2 * i + 1 à la somme s
    }

    // Affichage du résultat
    printf("La somme des nombres impairs de 1 à %d est : %d\n", 2 * n + 1, s);

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer une variable 'n' pour stocker l'entier saisi par l'utilisateur.
2. Déclarer une variable 's' pour stocker la somme des nombres impairs de 1 à 2 * n + 1.
3. Afficher un message demandant à l'utilisateur d'entrer un entier n.
4. Lire et stocker l'entier saisi dans la variable 'n'.
5. Initialiser la variable 's' à 0 pour accumuler la somme.
6. Répéter les étapes suivantes pour chaque entier i de 0 à n :
7.     Ajouter 2 * i + 1 à la somme s.
8. Afficher la somme calculée s.
9. Fin du programme.
*/
