#include <stdio.h>

int main() {
    // Déclaration des variables
    int n;
    double s = 0.0;
    double terme = 1.0; // Début avec le premier terme 1.0 (1/2^0)

    // Demande à l'utilisateur d'entrer un entier n :
    printf("Entrez un entier n : ");
    scanf("%d", &n);

    // Calcul de la somme s = 1 + 1/2 + 1/4 + ... + 1/(2^n)
    for (int i = 0; i <= n; i++) {
        s += terme; // Ajoute le terme actuel à la somme s
        terme /= 2.0; // Calcule le prochain terme (terme suivant est le terme actuel divisé par 2)
    }

    // Affichage du résultat
    printf("La somme 1 + 1/2 + 1/4 + ... + 1/(2^%d) est : %.6f\n", n, s);

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer une variable 'n' pour stocker l'entier saisi par l'utilisateur.
2. Déclarer une variable 's' de type double pour stocker la somme des fractions.
3. Déclarer une variable 'terme' de type double pour calculer chaque terme de la série.
4. Afficher un message demandant à l'utilisateur d'entrer un entier n.
5. Lire et stocker l'entier saisi dans la variable 'n'.
6. Initialiser la variable 's' à 0.0 pour accumuler la somme.
7. Initialiser la variable 'terme' à 1.0 pour commencer avec le premier terme (1.0 = 1/2^0).
8. Répéter les étapes suivantes pour chaque entier i de 0 à n :
9.     Ajouter le terme actuel à la somme s.
10.    Diviser le terme actuel par 2 pour obtenir le terme suivant.
11. Afficher la somme calculée s avec une précision de six chiffres après la virgule.
12. Fin du programme.
*/
