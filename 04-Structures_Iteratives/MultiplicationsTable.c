#include <stdio.h>

int main() {
    // Déclaration des variables
    int nombre;

    // Demande à l'utilisateur d'entrer un nombre
    printf("Entrez un nombre pour afficher sa table de multiplication : ");
    scanf("%d", &nombre);

    // Affichage de la table de multiplication
    printf("Table de multiplication de %d :\n", nombre);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", nombre, i, nombre * i);
    }

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer une variable 'nombre' pour stocker le nombre saisi.
2. Afficher un message demandant à l'utilisateur d'entrer un nombre.
3. Lire et stocker le nombre saisi dans la variable 'nombre'.
4. Afficher le titre de la table de multiplication.
5. Répéter les étapes suivantes pour chaque entier de 1 à 10 :
6.     Calculer le produit du nombre saisi par l'entier courant.
7.     Afficher l'équation de multiplication dans le format "nombre x entier = produit".
8. Fin du programme.
*/
