
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    // Lire les longueurs des deux côtés
    printf("Entrez la longueur du premier côté (a) : ");
    scanf("%lf", &a);
    printf("Entrez la longueur du deuxième côté (b) : ");
    scanf("%lf", &b);

    // Calculer la longueur de l'hypoténuse (c) selon le théorème de Pythagore
    c = sqrt(a * a + b * b);

    // Afficher le résultat
    printf("La longueur de l'hypoténuse (c) est : %.2f\n", c);

    return 0;
}
