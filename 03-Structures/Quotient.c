#include <stdio.h>

int main() {
    int nombre1, nombre2;
    float quotient;

    // Lire le premier nombre entier :
    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    // Lire le second nombre entier :
    printf("Entrez le second nombre : ");
    scanf("%d", &nombre2);

    // Vérifier si le second nombre est différent de zéro :
    if (nombre2 == 0) {
        // Si le second nombre est zéro, afficher un message d'erreur :
        printf("Erreur : Division par zéro n'est pas possible.\n");
    } else {
        // Si le second nombre est différent de zéro, calculer le quotient :
        quotient = (float)nombre1 / nombre2;

        // Afficher le quotient :
        printf("Le quotient de %d par %d est : %.2f\n", nombre1, nombre2, quotient);
    }

    return 0;
}
