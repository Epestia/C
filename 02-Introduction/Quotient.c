#include <stdio.h>

int main() {
    int nbr1, nbr2;
    float quotient;

    // Lire les deux nombres entiers
    printf("Entrez nombre1 : ");
    scanf("%d", &nbr1);
    printf("Entrez nombre2 : ");
    scanf("%d", &nbr2);

    // Vérifier si le dénominateur est zéro
    if (nbr2 == 0) {
        printf("Erreur : Division par zéro\n");
    } else {
        // Calculer le quotient
        quotient = (float)nbr1 / nbr2;
        // Afficher le quotient
        printf("Le quotient est : %.2f\n", quotient);
    }

    return 0;
}
