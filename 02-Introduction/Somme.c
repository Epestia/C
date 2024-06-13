#include <stdio.h>

int main() {
    int nbr1, nbr2;
    int somme, produit, difference;

    // Demander à l'utilisateur d'entrer deux nombres entiers
    printf("Entrez nombre1 : ");
    scanf("%d", &nbr1);
    printf("Entrez nombre2 : ");
    scanf("%d", &nbr2);

    // Calculer la somme, le produit et la différence
    somme = nbr1 + nbr2;
    produit = nbr1 * nbr2;
    difference = nbr1 - nbr2;

    // Afficher les résultats
    printf("Le résultat de la somme est : %d\n", somme);
    printf("Le résultat du produit est : %d\n", produit);
    printf("Le résultat de la différence est : %d\n", difference);

    return 0;
}
