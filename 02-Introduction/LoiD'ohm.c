#include <stdio.h>

//fonction main : 
int main() {
    double r, i, U;

    // Demander à l'utilisateur de saisir la résistance r :
    printf("Entrez la valeur de la résistance (r en ohms) : ");
    scanf("%lf", &r);

    // Demander à l'utilisateur de saisir l'intensité du courant i
    printf("Entrez la valeur de l'intensité du courant (i en ampères) : ");
    scanf("%lf", &i);

    // Calculer la tension U selon U = r * i
    U = r * i;

    // Afficher le résultat
    printf("La tension U est : %.2f volts\n", U);

    return 0;
}