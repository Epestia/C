#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Fonction pour afficher l'état actuel du mot avec les lettres trouvées
void afficherMot(char mot[], char trouve[], int taille) {
    for (int i = 0; i < taille; i++) {
        if (trouve[i]) {
            printf("%c ", mot[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

// Fonction pour vérifier si le mot est complètement trouvé
int motTrouve(char trouve[], int taille) {
    for (int i = 0; i < taille; i++) {
        if (!trouve[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    // Déclaration du mot à deviner
    char mot[] = "PROGRAMMATION";
    int taille = strlen(mot);
    char trouve[taille];
    memset(trouve, 0, taille); // Initialise le tableau trouve avec des 0 (faux)
    int vies = 10; // Nombre de vies initiales
    char lettre;
    int lettreTrouvee;

    printf("Bienvenue dans le jeu de pendu !\n");

    // Boucle principale du jeu
    while (vies > 0 && !motTrouve(trouve, taille)) {
        afficherMot(mot, trouve, taille);
        printf("Il vous reste %d vies.\n", vies);
        printf("Proposez une lettre : ");
        scanf(" %c", &lettre);
        lettre = toupper(lettre); // Convertit la lettre en majuscule
        lettreTrouvee = 0;

        // Vérifie si la lettre proposée est dans le mot
        for (int i = 0; i < taille; i++) {
            if (mot[i] == lettre) {
                trouve[i] = 1; // Marque la lettre comme trouvée
                lettreTrouvee = 1;
            }
        }

        // Si la lettre n'est pas trouvée, on décrémente le nombre de vies
        if (!lettreTrouvee) {
            vies--;
            printf("Désolé, la lettre %c n'est pas dans le mot.\n", lettre);
        }
    }

    // Affiche le résultat final du jeu
    if (motTrouve(trouve, taille)) {
        printf("Félicitations ! Vous avez trouvé le mot : %s\n", mot);
    } else {
        printf("Vous avez perdu. Le mot était : %s\n", mot);
    }

    return 0;
}
