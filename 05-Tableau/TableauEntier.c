#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    printf("Entrez le nombre d'éléments de a: ");
    scanf("%d", &n1);
    int *a = (int *)malloc(n1 * sizeof(int));

    printf("Entrez les éléments de a:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Entrez le nombre d'éléments de b: ");
    scanf("%d", &n2);
    int *b = (int *)malloc(n2 * sizeof(int));

    printf("Entrez les éléments de b:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Réallocation de la mémoire pour accueillir les éléments de b
    a = (int *)realloc(a, (n1 + n2) * sizeof(int));

    // Ajout des éléments de b à la fin de a
    for (int i = 0; i < n2; i++) {
        a[n1 + i] = b[i];
    }

    printf("Les éléments de a après l'ajout de b:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Libération de la mémoire
    free(a);
    free(b);

    return 0;
}
