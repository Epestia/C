#include <stdio.h>

int main() {
    // Déclaration des variables :
    float nombre1, nombre2, nombre3, temp;

    // Demande de saisie des trois nombres
    printf("Entrez le premier nombre : ");
    scanf("%f", &nombre1);
    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &nombre2);
    printf("Entrez le troisieme nombre : ");
    scanf("%f", &nombre3);

    // Classement des nombres dans l'ordre croissant
    if (nombre1 > nombre2) {
        temp = nombre1;
        nombre1 = nombre2;
        nombre2 = temp;
    }
    if (nombre2 > nombre3) {
        temp = nombre2;
        nombre2 = nombre3;
        nombre3 = temp;
    }
    if (nombre1 > nombre2) {
        temp = nombre1;
        nombre1 = nombre2;
        nombre2 = temp;
    }

    // Affichage des nombres dans l'ordre croissant
    printf("Les nombres dans l'ordre croissant sont : %.2f, %.2f, %.2f\n", nombre1, nombre2, nombre3);

    return 0;
}
