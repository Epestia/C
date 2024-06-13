#include <stdio.h>
#include <math.h>

int main() {
    double cote1, cote2, hypotenuse;

    // Lire les longueurs des deux côtés adjacents :
    printf("Entrez la longueur du premier côté : ");
    scanf("%lf", &cote1);
    printf("Entrez la longueur du deuxième côté : ");
    scanf("%lf", &cote2);

    // Calculer l'hypoténuse :
    hypotenuse = sqrt(cote1 * cote1 + cote2 * cote2);

    // Afficher l'hypoténuse :
    printf("L'hypoténuse du triangle rectangle est : %.2lf\n", hypotenuse);

    return 0;
}
