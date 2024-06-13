#include <stdio.h>

int main() {
    // Déclaration des variables
    int n;
    unsigned long long factorial = 1;

    // Demande à l'utilisateur d'entrer un entier positif n
    printf("Entrez un entier positif n : ");
    scanf("%d", &n);

    // Vérification que n est positif
    if (n < 0) {
        printf("Erreur : Entrez un entier positif.\n");
        return 1; // Quitte le programme avec une erreur
    }

    // Calcul de la factorielle n!
    for (int i = 1; i <= n; ++i) {
        factorial *= i; // Multiplie i à la factorielle
    }

    // Affichage du résultat
    printf("%d! = %llu\n", n, factorial);

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer une variable 'n' pour stocker l'entier positif saisi par l'utilisateur.
2. Déclarer une variable 'factorial' de type 'unsigned long long' pour stocker la factorielle de 'n'.
3. Afficher un message demandant à l'utilisateur d'entrer un entier positif n.
4. Lire et stocker l'entier saisi dans la variable 'n'.
5. Vérifier si 'n' est strictement positif ; si non, afficher un message d'erreur et quitter le programme.
6. Initialiser 'factorial' à 1 pour commencer le calcul de la factorielle.
7. Répéter les étapes suivantes pour chaque entier i de 1 à n :
8.     Multiplier 'factorial' par 'i' pour calculer la factorielle.
9. Afficher la factorielle calculée.
10. Fin du programme.
*/
