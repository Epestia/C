#include <stdio.h>

int main() {
    double longueur, largeur;
    double perimetre, aire;

    // Demander à l'utilisateur d'entrer la longueur et la largeur du rectangle
    printf("Entrez la longueur du rectangle : ");
    scanf("%lf", &longueur);
    printf("Entrez la largeur du rectangle : ");
    scanf("%lf", &largeur);

    // Calculer le périmètre et l'aire
    perimetre = 2 * (longueur + largeur);
    aire = longueur * largeur;

    // Afficher les résultats
    printf("Le périmètre du rectangle est : %.2lf\n", perimetre);
    printf("L'aire du rectangle est : %.2lf\n", aire);

    return 0;
     double base;
    double perimetre, aire;

    // Demander à l'utilisateur d'entrer la base du triangle équilatéral
    printf("Entrez la base du triangle équilatéral : ");
    scanf("%lf", &base);

    // Calculer le périmètre et l'aire
    perimetre = 3 * base;
    aire = (sqrt(3) / 4) * base * base;

    // Afficher les résultats
    printf("Le périmètre du triangle équilatéral est : %.2lf\n", perimetre);
    printf("L'aire du triangle équilatéral est : %.2lf\n", aire);

    return 0;
}
