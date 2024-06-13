#include <stdio.h>

int main() {
    int totalSecondes, heures, minutes, secondes;

    // Lire un nombre de secondes
    printf("Entrez un nombre de secondes : ");
    scanf("%d", &totalSecondes);

    // Convertir les secondes en heures, minutes et secondes
    heures = totalSecondes / 3600;
    totalSecondes %= 3600;
    minutes = totalSecondes / 60;
    secondes = totalSecondes % 60;

    // Afficher les heures, minutes et secondes
    printf("Temps converti : %d heures, %d minutes, %d secondes\n", heures, minutes, secondes);

    return 0;
}
