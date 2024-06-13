#include <stdio.h>

int main() {
    // Déclaration des variables
    int n, s = 0;

    // Demande à l'utilisateur d'entrer un entier n
    printf("Entrez un entier n : ");
    scanf("%d", &n);

    // Calcul de la somme s = 2 + 4 + 6 + ... + 2 * n
    for (int i = 1; i <= n; i++) {
        s += 2 * i; // Ajoute 2 * i à la somme s
    }

    // Affichage du résultat
    printf("La somme des nombres pairs de 2 à %d est : %d\n", 2 * n, s);

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer une variable 'n' pour stocker l'entier saisi par l'utilisateur.
2. Déclarer une variable 's' pour stocker la somme des nombres pairs de 2 à 2 * n.
3. Afficher un message demandant à l'utilisateur d'entrer un entier n.
4. Lire et stocker l'entier saisi dans la variable 'n'.
5. Initialiser la variable 's' à 0 pour accumuler la somme.
6. Répéter les étapes suivantes pour chaque entier i de 1 à n :
7.     Ajouter 2 * i à la somme s.
8. Afficher la somme calculée s.
9. Fin du programme.
*/
