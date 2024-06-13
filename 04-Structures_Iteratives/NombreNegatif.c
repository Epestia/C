#include <stdio.h>

int main() {
    // Déclaration des variables
    int nombre;

    // Lecture et traitement du nombre
    do {
        // Demande à l'utilisateur d'entrer un nombre
        printf("Entrez un nombre (entrez un nombre négatif pour arrêter) : ");
        scanf("%d", &nombre);

        // Vérification si le nombre est négatif pour arrêter la boucle
        if (nombre < 0) {
            printf("Fin du programme.\n");
        } else {
            // Affichage du double du nombre si positif ou nul
            printf("Le double de %d est : %d\n", nombre, 2 * nombre);
        }
    } while (nombre >= 0);

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer une variable 'nombre' pour stocker le nombre saisi.
2. Répéter les étapes suivantes :
3.     Afficher un message demandant à l'utilisateur d'entrer un nombre.
4.     Lire et stocker le nombre saisi dans la variable 'nombre'.
5.     Vérifier si le nombre est négatif.
6.     Si le nombre est négatif, afficher un message de fin et quitter la boucle.
7.     Sinon, calculer et afficher le double du nombre.
8. Fin du programme.
*/
