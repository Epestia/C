#include <stdio.h>

int main() {
    // Déclaration des variables :
    float nombre1, nombre2, nombre3, plus_petit;

    // Demande de saisie des trois nombres
    printf("Entrez le premier nombre : ");
    scanf("%f", &nombre1);
    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &nombre2);
    printf("Entrez le troisieme nombre : ");
    scanf("%f", &nombre3);

    // Initialisation du plus petit nombre
    plus_petit = nombre1;

    // Comparaison pour trouver le plus petit nombre
    if (nombre2 < plus_petit) {
        plus_petit = nombre2;
    }
    if (nombre3 < plus_petit) {
        plus_petit = nombre3;
    }

    // Affichage du résultat
    printf("Le plus petit des trois nombres est %.2f.\n", plus_petit);

    return 0;
}
