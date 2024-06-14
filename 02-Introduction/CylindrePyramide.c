#include <stdio.h>
#define PI 3.14159265358979323846

// Fonction pour calculer le volume d'un cylindre
double volumeCylindre(double rayon, double hauteur) {
    return PI * rayon * rayon * hauteur;
}

// Fonction pour calculer le volume d'une pyramide
double volumePyramide(double aireBase, double hauteur) {
    return (aireBase * hauteur) / 3.0;
}

int main() {
    int choix;
    double rayon, hauteur, aireBase, volume;

    // Afficher le menu
    printf("Choisissez le volume à calculer:\n");
    printf("1. Volume d'un cylindre\n");
    printf("2. Volume d'une pyramide\n");
    printf("Votre choix: ");
    scanf("%d", &choix);

    if (choix == 1) {
        // Calcul du volume du cylindre
        printf("Entrez le rayon du cylindre: ");
        scanf("%lf", &rayon);
        printf("Entrez la hauteur du cylindre: ");
        scanf("%lf", &hauteur);
        volume = volumeCylindre(rayon, hauteur);
        printf("Le volume du cylindre est: %lf\n", volume);
    } else if (choix == 2) {
        // Calcul du volume de la pyramide
        printf("Entrez l'aire de la base de la pyramide: ");
        scanf("%lf", &aireBase);
        printf("Entrez la hauteur de la pyramide: ");
        scanf("%lf", &hauteur);
        volume = volumePyramide(aireBase, hauteur);
        printf("Le volume de la pyramide est: %lf\n", volume);
    } else {
        printf("Choix invalide.\n");
    }

    return 0;
}
