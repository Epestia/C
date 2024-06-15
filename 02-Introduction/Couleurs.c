#include <stdio.h>
#include <string.h> // Pour utiliser strcmp()

int main() {
    char couleur[20]; // Tableau de caractères pour stocker la couleur saisie

    // Demande à l'utilisateur de saisir une couleur
    printf("Entrez une couleur (rouge, vert, bleu) : ");
    scanf("%s", couleur);

    // Comparaison de la couleur saisie avec les couleurs connues
    if (strcmp(couleur, "rouge") == 0) {
        printf("Vous avez choisi la couleur rouge.\n");
    } else if (strcmp(couleur, "vert") == 0) {
        printf("Vous avez choisi la couleur verte.\n");
    } else if (strcmp(couleur, "bleu") == 0) {
        printf("Vous avez choisi la couleur bleue.\n");
    } else {
        printf("Couleur non reconnue.\n");
    }

    return 0;
}
