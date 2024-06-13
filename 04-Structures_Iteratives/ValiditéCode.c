#include <stdio.h>

int main() {
    // Déclaration des variables
    int premier_nombre, deuxieme_nombre, controle;

    // Lecture du code d'atelier
    do {
        printf("Entrez un code d'atelier (premier_nombre-deuxieme_nombre) : ");
        scanf("%d-%d", &premier_nombre, &deuxieme_nombre);

        // Calcul du contrôle
        controle = premier_nombre % 97;

        // Vérification si le code est correct
        if (controle == deuxieme_nombre) {
            printf("Code valide.\n");
            break; // Sort de la boucle si le code est valide
        } else {
            printf("Code incorrect. Réessayez.\n");
        }
    } while (1); // Boucle tant que le code n'est pas valide

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer trois variables 'premier_nombre', 'deuxieme_nombre' et 'controle' pour stocker les valeurs du code et son contrôle.
2. Répéter indéfiniment :
3.     Afficher un message demandant à l'utilisateur d'entrer un code d'atelier sous la forme 'premier_nombre-deuxieme_nombre'.
4.     Lire et stocker 'premier_nombre' et 'deuxieme_nombre' à partir de l'entrée standard.
5.     Calculer 'controle' comme le reste de la division de 'premier_nombre' par 97.
6.     Vérifier si 'controle' est égal à 'deuxieme_nombre' :
7.         Si oui, afficher "Code valide" et sortir de la boucle.
8.         Sinon, afficher "Code incorrect. Réessayez." et continuer la boucle.
9. Fin du programme.
*/
