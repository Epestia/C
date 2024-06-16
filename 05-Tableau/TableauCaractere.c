#include <stdio.h>

int main() {
    char tableau[100];

    // Lire la chaîne de caractères
    printf("Entrez une chaîne de caractères : ");
    fgets(tableau, sizeof(tableau), stdin);

    // Afficher la chaîne de caractères
    printf("La chaîne de caractères saisie est : %s", tableau);

    return 0;
}
