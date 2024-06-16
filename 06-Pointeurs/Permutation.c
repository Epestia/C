#include <stdio.h>
#include <stdlib.h>

void swap(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Allocation dynamique de la mémoire pour deux entiers
    int *x = (int *)malloc(sizeof(int));
    int *y = (int *)malloc(sizeof(int));

    // Vérification que la mémoire a bien été allouée
    if (x == NULL || y == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return 1;
    }

    // Initialisation des valeurs
    *x = 5;
    *y = 10;

    // Affichage des valeurs avant la permutation
    printf("Avant la permutation :\n");
    printf("x = %d, y = %d\n", *x, *y);

    // Permutation des pointeurs
    swap(&x, &y);

    // Affichage des valeurs après la permutation
    printf("Après la permutation :\n");
    printf("x = %d, y = %d\n", *x, *y);

    // Libération de la mémoire allouée
    free(x);
    free(y);

    return 0;
}
