#include <stdio.h>
#include <string.h>

int main() {
    char ligne[100];
    int i, longueur;

    // Lire la ligne de texte
    printf("Entrez une ligne de texte : ");
    fgets(ligne, sizeof(ligne), stdin);

    // Retirer le caractère de nouvelle ligne (si présent)
    longueur = strlen(ligne);
    if (ligne[longueur - 1] == '\n') {
        ligne[longueur - 1] = '\0';
        longueur--;
    }

    // Afficher la ligne en sens inverse
    printf("La ligne de texte en sens inverse est : ");
    for (i = longueur - 1; i >= 0; i--) {
        putchar(ligne[i]);
    }
    printf("\n");

    return 0;
}
