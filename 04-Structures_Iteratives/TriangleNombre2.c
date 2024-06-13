    #include <stdio.h>

int main() {
    // Variables
    int lignes = 7; // Nombre de lignes du triangle
    int sommeTotale = 0;

    // Boucle pour chaque ligne
    for (int i = 1; i <= lignes; ++i) {
        int sommeLigne = 0;
        // Boucle pour chaque nombre dans la ligne
        for (int j = i; j <= lignes; ++j) {
            printf("%d ", j);
            sommeLigne += j;
        }
        printf("- Somme : %d\n", sommeLigne);
        sommeTotale += sommeLigne;
    }

    // Affichage de la somme totale
    printf("Somme totale : %d\n", sommeTotale);

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer une variable 'lignes' pour le nombre total de lignes (7 dans cet exemple).
2. Déclarer une variable 'sommeTotale' pour stocker la somme totale des nombres affichés.
3. Pour chaque ligne de 1 à 'lignes' :
4.     Déclarer une variable 'sommeLigne' pour calculer la somme des nombres dans la ligne.
5.     Pour chaque nombre de 'i' à 'lignes' :
6.         Afficher le nombre suivi d'un espace.
7.         Ajouter le nombre à 'sommeLigne'.
8.     Afficher la somme de la ligne.
9.     Ajouter 'sommeLigne' à 'sommeTotale'.
10. Afficher la somme totale.
11. Fin du programme.
*/
