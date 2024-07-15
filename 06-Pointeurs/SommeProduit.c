#include <stdio.h>

int main() {
    // 1. Déclarer et initialiser le tableau
    int tableau[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // 2. Déclarer un pointeur et l'assigner à l'adresse du premier élément du tableau
    int *ptr = tableau;

    // 3. Utiliser le pointeur pour calculer la somme de tous les éléments du tableau
    int somme = 0;
    for (int i = 0; i < 10; i++) {
        somme += *(ptr + i);
    }

    // 4. Utiliser le pointeur pour calculer le produit de tous les éléments du tableau
    int produit = 1;
    for (int i = 1; i < 10; i++) { // Commencer à 1 car le produit de 0 est toujours 0
        produit *= *(ptr + i);
    }

    // 5. Afficher la somme et le produit des éléments du tableau
    printf("Somme des éléments du tableau : %d\n", somme);
    printf("Produit des éléments du tableau : %d\n", produit);

    return 0;
}
