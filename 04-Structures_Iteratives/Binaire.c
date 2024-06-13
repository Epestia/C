#include <stdio.h>

void afficherBinaire(int nombre) {
    if (nombre > 1) {
        afficherBinaire(nombre / 2); // Appel récursif pour diviser le nombre par 2
    }
    printf("%d", nombre % 2); // Affiche le reste de la division par 2 (0 ou 1)
}

int main() {
    // Déclaration des variables
    int nombre;

    // Demande à l'utilisateur d'entrer un nombre entier positif
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &nombre);

    // Vérification si le nombre est positif
    if (nombre < 0) {
        printf("Erreur : Entrez un nombre entier positif.\n");
        return 1; // Quitte le programme avec une erreur
    }

    // Affichage de la représentation binaire
    printf("La représentation binaire de %d est : ", nombre);
    afficherBinaire(nombre);
    printf("\n");

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer une fonction 'afficherBinaire' qui prend un entier 'nombre' en paramètre et affiche sa représentation binaire.
2. Dans 'afficherBinaire' :
3.     Vérifier si 'nombre' est supérieur à 1 :
4.         Si oui, appeler récursivement 'afficherBinaire' avec 'nombre' divisé par 2.
5.     Afficher le reste de la division de 'nombre' par 2 (0 ou 1).
6. Déclarer une variable 'nombre' pour stocker le nombre entier saisi par l'utilisateur.
7. Afficher un message demandant à l'utilisateur d'entrer un nombre entier positif.
8. Lire et stocker le nombre saisi dans la variable 'nombre'.
9. Vérifier si 'nombre' est strictement positif :
10.    Si non, afficher un message d'erreur et quitter le programme avec une erreur.
11. Afficher la représentation binaire de 'nombre' en appelant 'afficherBinaire'.
12. Fin du programme.
*/
