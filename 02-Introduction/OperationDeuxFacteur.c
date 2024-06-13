#include <stdio.h>

int main() {
    int num1, den1, num2, den2;
    int num_sum, den_sum, num_diff, den_diff, num_prod, den_prod;
    float sum_dec, diff_dec, prod_dec;

    // Lire les numérateurs et dénominateurs des deux fractions
    printf("Entrez le numérateur de la première fraction : ");
    scanf("%d", &num1);
    printf("Entrez le dénominateur de la première fraction : ");
    scanf("%d", &den1);
    printf("Entrez le numérateur de la deuxième fraction : ");
    scanf("%d", &num2);
    printf("Entrez le dénominateur de la deuxième fraction : ");
    scanf("%d", &den2);

    // Calculer la somme
    num_sum = num1 * den2 + num2 * den1;
    den_sum = den1 * den2;

    // Calculer la différence
    num_diff = num1 * den2 - num2 * den1;
    den_diff = den1 * den2;

    // Calculer le produit
    num_prod = num1 * num2;
    den_prod = den1 * den2;

    // Calculer les résultats sous forme décimale
    sum_dec = (float)num_sum / den_sum;
    diff_dec = (float)num_diff / den_diff;
    prod_dec = (float)num_prod / den_prod;

    // Afficher les résultats sous forme fractionnaire non simplifiée
    printf("La somme des fractions est : %d/%d\n", num_sum, den_sum);
    printf("La différence des fractions est : %d/%d\n", num_diff, den_diff);
    printf("Le produit des fractions est : %d/%d\n", num_prod, den_prod);

    // Afficher les résultats sous forme décimale
    printf("La somme sous forme décimale est : %.2f\n", sum_dec);
    printf("La différence sous forme décimale est : %.2f\n", diff_dec);
    printf("Le produit sous forme décimale est : %.2f\n", prod_dec);

    return 0;
}
