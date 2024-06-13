#include <stdio.h>

int main() {
    // Déclaration des variables
    int min, max;

    // Demande à l'utilisateur d'entrer les bornes
    printf("Entrez la borne inférieure : ");
    scanf("%d", &min);
    printf("Entrez la borne supérieure : ");
    scanf("%d", &max);

    // Affichage des nombres entre les bornes
    printf("Les nombres entre %d et %d sont :\n", min, max);
    for (int i = min; i <= max; ++i) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer deux variables 'min' et 'max' pour stocker les bornes entrées par l'utilisateur.
2. Afficher un message demandant à l'utilisateur d'entrer la borne inférieure.
3. Lire et stocker la borne inférieure dans la variable 'min'.
4. Afficher un message demandant à l'utilisateur d'entrer la borne supérieure.
5. Lire et stocker la borne supérieure dans la variable 'max'.
6. Afficher les nombres entre 'min' et 'max' inclusivement :
7.     Répéter pour chaque nombre 'i' de 'min' à 'max' :
8.         Afficher 'i'.
9. Fin du programme.
*/
