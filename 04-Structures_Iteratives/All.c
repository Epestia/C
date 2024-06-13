#include <stdio.h>
#include <stdbool.h> // Pour utiliser le type bool et les valeurs true/false
#include <limits.h> // Pour utiliser INT_MIN et INT_MAX

// Fonction pour vérifier si un nombre est premier :
bool estPremier(int nombre) {
    // Vérifier si 'nombre' est inférieur ou égal à 1 :
    //     Si oui, retourner false car les nombres <= 1 ne sont pas premiers.
    // Pour chaque 'i' de 2 à la racine carrée de 'nombre' :
    //     Si 'nombre' est divisible par 'i' sans reste, retourner false car 'nombre' n'est pas premier.
    // Retourner true si aucun diviseur n'est trouvé, indiquant que 'nombre' est premier.
    if (nombre <= 1) {
        return false;
    }
    for (int i = 2; i * i <= nombre; ++i) {
        if (nombre % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Déclaration des variables :
    int nombres[10];
    int somme = 0;
    int max = INT_MIN, min = INT_MAX;
    float moyenne;
    int lignes = 7; // Nombre de lignes du triangle
    int sommeTotale = 0;
    int sommeNombresPremiers = 0;
    int n;
    int nbNombresPremiers = 0;

    // Partie 1 : Calcul de la somme de 10 nombres :
    // Déclarer un tableau 'nombres' pour stocker les 10 nombres.
    // Lire les 10 nombres à partir de l'entrée.
    // Calculer la somme des nombres et l'afficher.

    printf("Partie 1 : Calcul de la somme de 10 nombres\n");
    printf("Entrez 10 nombres :\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &nombres[i]);
        somme += nombres[i];
    }
    printf("La somme des 10 nombres est : %d\n", somme);
    printf("\n");

    // Partie 2 : Calcul du maximum, minimum et moyenne de 10 nombres
    // Utiliser une boucle pour trouver le maximum et le minimum des nombres.
    // Calculer la moyenne des nombres et l'afficher.

    printf("Partie 2 : Calcul du maximum, minimum et moyenne de 10 nombres\n");
    for (int i = 0; i < 10; ++i) {
        if (nombres[i] > max) {
            max = nombres[i];
        }
        if (nombres[i] < min) {
            min = nombres[i];
        }
        somme += nombres[i];
    }
    moyenne = (float)somme / 10.0;
    printf("Maximum : %d\n", max);
    printf("Minimum : %d\n", min);
    printf("Moyenne : %.2f\n", moyenne);
    printf("\n");

    // Partie 3 : Triangle de nombres avec somme des nombres pour chaque ligne et somme totale :
    // Utiliser deux boucles imbriquées pour afficher le triangle de nombres.
    // Calculer la somme des nombres pour chaque ligne et afficher cette somme.
    // Calculer la somme totale de tous les nombres affichés dans le triangle et l'afficher.

    printf("Partie 3 : Triangle de nombres avec somme des nombres pour chaque ligne et somme totale\n");
    for (int i = 1; i <= lignes; ++i) {
        int sommeLigne = 0;
        for (int j = i; j <= lignes; ++j) {
            printf("%d ", j);
            sommeLigne += j;
        }
        printf("- Somme : %d\n", sommeLigne);
        sommeTotale += sommeLigne;
    }
    printf("Somme totale : %d\n", sommeTotale);
    printf("\n");

    // Partie 4 : Nombres premiers entre 1 et 1000 :
    // Utiliser la fonction 'estPremier' pour vérifier et afficher tous les nombres premiers entre 1 et 1000.

    printf("Partie 4 : Nombres premiers entre 1 et 1000\n");
    printf("Nombres premiers entre 1 et 1000 :\n");
    for (int i = 2; i <= 1000; ++i) {
        if (estPremier(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("\n");

    // Partie 5 : Calcul du nombre de nombres premiers jusqu'à un nombre n :
    // Lire un nombre 'n' à partir de l'entrée.
    // Utiliser la fonction 'estPremier' pour calculer la somme des nombres premiers et le nombre de nombres premiers jusqu'à 'n'.
    // Afficher ces résultats.

    printf("Partie 5 : Calcul du nombre de nombres premiers jusqu'à un nombre n\n");
    printf("Entrez un nombre n : ");
    scanf("%d", &n);
    for (int i = 2; i <= n; ++i) {
        if (estPremier(i)) {
            sommeNombresPremiers += i;
            nbNombresPremiers++;
        }
    }
    printf("Somme des nombres premiers entre 1 et %d : %d\n", n, sommeNombresPremiers);
    printf("Nombre de nombres premiers entre 1 et %d : %d\n", n, nbNombresPremiers);
    printf("\n");

    return 0;
}
