#include <stdio.h>

int main() {
    int n, i, temp;

    // Lire la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int a[n];

    // Lire les éléments du tableau
    printf("Entrez les éléments du tableau : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Inverser le tableau
    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    // Afficher le tableau inversé
    printf("Le tableau inversé : ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
