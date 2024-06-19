#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    double rayon;
    double surface, circonference;

    // Demander à l'utilisateur d'entrer le rayon du cercle
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);

    // Calculer la surface et la circonférence
    surface = PI * rayon * rayon;
    circonference = 2 * PI * rayon;

    // Afficher les résultats
    printf("La surface du cercle est : %.2lf\n", surface);
    printf("La circonférence du cercle est : %.2lf\n", circonference);

    return 0;
}
