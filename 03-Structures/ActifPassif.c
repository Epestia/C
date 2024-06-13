#include <stdio.h>

int main() {
    // Déclaration des variables
    int age;

    // Demande de saisie de l'âge
    printf("Entrez l'age de la personne : ");
    scanf("%d", &age);

    // Détermination de la catégorie (actif ou passif) en fonction de l'âge
    if (age >= 20 && age <= 65) {
        printf("Actif\n");
    } else {
        printf("Passif\n");
    }

    return 0;
}
