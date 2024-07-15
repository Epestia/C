#include <stdio.h>

int main() {
    // 1. Déclarer et initialiser le tableau :
    int tableau[5] = {1, 2, 3, 4, 5};

    // 2. Déclarer un pointeur et l'assigner à l'adresse du premier élément du tableau :
    int *ptr = tableau;

    // 3. Utiliser le pointeur pour afficher tous les éléments du tableau :
    printf("Valeurs initiales du tableau :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // 4. Utiliser le pointeur pour doubler les valeurs de tous les éléments du tableau :
    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * 2;
    }

    // 5. Utiliser le pointeur pour afficher les nouvelles valeurs du tableau :
    printf("Valeurs du tableau après doublement :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
