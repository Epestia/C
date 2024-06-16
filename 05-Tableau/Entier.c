#include <stdio.h>

int main() {
    int n, x, i, j;

    // Lire la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int a[n];

    // Lire les éléments du tableau
    printf("Entrez les éléments du tableau : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Lire la valeur à éliminer
    printf("Entrez la valeur à éliminer : ");
    scanf("%d", &x);

    // Éliminer les occurrences de x et tasser les éléments restants
    j = 0;
    for (i = 0; i < n; i++) {
        if (a[i] != x) {
            a[j] = a[i];
            j++;
        }
    }

    // Afficher le tableau résultant
    printf("Le tableau après élimination : ");
    for (i = 0; i < j; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
