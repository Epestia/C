#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    double rayon, hauteur;
    double volume, surface;

    // Lire le rayon et la hauteur du cylindre
    printf("Entrez le rayon du cylindre : ");
    scanf("%lf", &rayon);
    printf("Entrez la hauteur du cylindre : ");
    scanf("%lf", &hauteur);

    // Calculer le volume et la surface du cylindre
    volume = PI * rayon * rayon * hauteur;
    surface = 2 * PI * rayon * (rayon + hauteur);

    // Afficher le volume et la surface
    printf("Le volume du cylindre est : %.2lf\n", volume);
    printf("La surface du cylindre est : %.2lf\n", surface);

    return 0;
}
