#include <stdio.h>

int main() {
    // Variables
    int lignes = 7; // Nombres de lignes pour le triangle

    // Boucle pour chaque ligne
    for (int i = 1; i <= lignes; ++i) {
        // Boucle pour chaque nombre dans la ligne
        for (int j = i; j <= lignes; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer une variable 'lignes' pour le nombre total de lignes (7 dans cet exemple).
2. Pour chaque ligne de 1 à 'lignes' :
3.     Pour chaque nombre de 'i' à 'lignes' :
4.         Afficher le nombre suivi d'un espace.
5.     Aller à la ligne suivante.
6. Fin du programme.
*/
