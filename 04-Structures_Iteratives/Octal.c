#include <stdio.h>

int main() {
    int number;

    // Demander à l'utilisateur de saisir un nombre entier
    printf("Entrez un nombre entier: ");
    scanf("%d", &number);

    // Afficher le nombre en format octal
    printf("Le nombre en octal est: %o\n", number);

    return 0;
}
