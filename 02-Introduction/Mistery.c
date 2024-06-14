#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMystere, nombreDevine;
    int essais = 0;

    // Initialisation du générateur de nombres aléatoires avec le temps actuel
    srand(time(NULL));
    // Génère un nombre aléatoire entre 1 et 100
    nombreMystere = rand() % 100 + 1;

    // Affichage du message de bienvenue et des instructions du jeu
    printf("Bienvenue dans le jeu du Nombre Mystère !\n");
    printf("J'ai choisi un nombre entre 1 et 100. Essayez de le deviner !\n");

    // Boucle principale du jeu : continue jusqu'à ce que l'utilisateur devine le nombre
    do {
        // Demande à l'utilisateur de saisir une proposition
        printf("Entrez votre proposition : ");
        scanf("%d", &nombreDevine);
        // Incrémente le nombre d'essais
        essais++;

        // Donne un indice à l'utilisateur
        if (nombreDevine < nombreMystere) {
            printf("C'est plus grand !\n");
        } else if (nombreDevine > nombreMystere) {
            printf("C'est plus petit !\n");
        } else {
            // Si l'utilisateur a deviné le nombre, affiche un message de félicitations
            printf("Bravo ! Vous avez trouvé le nombre mystère en %d essais.\n", essais);
        }
    } while (nombreDevine != nombreMystere); // Répète la boucle tant que le nombre n'est pas trouvé

    return 0;
}
