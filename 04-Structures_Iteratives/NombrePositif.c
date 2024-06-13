#include <stdio.h>

int main() {
    // Déclaration des variables
    int nombre;

    // Lecture d'un nombre positif
    do {
        // Affichage du message pour entrer un nombre positif
        printf("Entrez un nombre positif : ");
        scanf("%d", &nombre);

        // Vérification si le nombre est positif
        if (nombre <= 0) {
            printf("Nombre invalide. Veuillez entrer un nombre positif.\n");
        }
    } while (nombre <= 0);

    // Affichage du nombre positif
    printf("Vous avez saisi le nombre : %d\n", nombre);

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer une variable 'nombre' pour stocker le nombre saisi.
2. Répéter les étapes suivantes jusqu'à ce qu'un nombre positif soit saisi :
3.     Afficher un message demandant à l'utilisateur d'entrer un nombre positif.
4.     Lire et stocker le nombre saisi dans la variable 'nombre'.
5.     Vérifier si le nombre est inférieur ou égal à zéro.
6.     Si le nombre est inférieur ou égal à zéro, afficher un message d'erreur et revenir à l'étape 3.
7. Afficher le nombre positif saisi une fois qu'il est valide.
8. Fin du programme.
*/
