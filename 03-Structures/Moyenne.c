#include <stdio.h>

int main() {
    // Déclaration des variables
    float nombre1, nombre2, nombre3, moyenne;

    // Demande de saisie des trois nombres
    printf("Entrez le premier nombre : ");
    scanf("%f", &nombre1);
    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &nombre2);
    printf("Entrez le troisieme nombre : ");
    scanf("%f", &nombre3);

    // Calcul de la moyenne
    moyenne = (nombre1 + nombre2 + nombre3) / 3.0;

    // Affichage du résultat
    printf("La moyenne des trois nombres est %.2f.\n", moyenne);

    return 0;
}
