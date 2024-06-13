#include <stdio.h>

int main() {
    // Déclaration des variables
    float nombre1, nombre2, plus_grand;

    // Demande de saisie des deux nombres
    printf("Entrez le premier nombre : ");
    scanf("%f", &nombre1);
    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &nombre2);

    // Comparaison des deux nombres
    if (nombre1 > nombre2) {
        plus_grand = nombre1;
    } else {
        plus_grand = nombre2;
    }

    // Affichage du résultat
    printf("Le plus grand des deux nombres est %.2f.\n", plus_grand);

    return 0;
}
