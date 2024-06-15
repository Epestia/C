#include <stdio.h>

int main() {
    int number;

    // Demander à l'utilisateur de saisir un nombre entier :
    printf("Entrez un nombre entier: ");
    scanf("%d", &number);

    // Afficher le nombre en format hexadécimal :
    printf("Le nombre en hexadecimal est: %X\n", number);

    return 0;
}
