#include <stdio.h>

int main() {
    // Déclaration des variables
    int nombre, count = 0;
    double somme = 0.0;

    // Lecture des nombres et calcul de la somme
    printf("Entrez une suite de nombres (arrêtez avec un nombre négatif) :\n");

    while (1) {
        scanf("%d", &nombre);

        // Vérification si nombre est négatif
        if (nombre < 0) {
            break; // Sort de la boucle si nombre est négatif
        }

        somme += nombre;
        count++;
    }

    // Vérification si des nombres valides ont été entrés
    if (count > 0) {
        double moyenne = somme / count;
        printf("Somme des nombres entrés : %.2f\n", somme);
        printf("Moyenne des nombres entrés : %.2f\n", moyenne);
    } else {
        printf("Aucun nombre valide n'a été entré.\n");
    }

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer une variable 'nombre' pour lire chaque nombre entré par l'utilisateur.
2. Déclarer une variable 'count' pour compter le nombre de nombres entrés.
3. Déclarer une variable 'somme' de type 'double' pour accumuler la somme des nombres positifs ou nuls.
4. Afficher un message demandant à l'utilisateur d'entrer une suite de nombres (arrêter avec un nombre négatif).
5. Répéter indéfiniment :
6.     Lire 'nombre' à partir de l'entrée standard.
7.     Vérifier si 'nombre' est négatif ; si oui, sortir de la boucle.
8.     Ajouter 'nombre' à 'somme' et augmenter 'count'.
9. Si 'count' est supérieur à 0 :
10.    Calculer la moyenne en divisant 'somme' par 'count'.
11.    Afficher la somme et la moyenne des nombres entrés.
12. Sinon, afficher un message indiquant qu'aucun nombre valide n'a été entré.
13. Fin du programme.
*/
