#include <stdio.h>

int main() {
    // Déclaration des variables
    float a, b, quotient1, quotient2;

    // Demande de saisie des deux nombres
    printf("Entrez le premier nombre (a) : ");
    scanf("%f", &a);
    printf("Entrez le deuxieme nombre (b) : ");
    scanf("%f", &b);

    // Vérification que les nombres sont non nuls et calcul des quotients
    if (a != 0 && b != 0) {
        quotient1 = a / b;
        quotient2 = b / a;
        printf("Le quotient de a par b est : %.2f\n", quotient1);
        printf("Le quotient de b par a est : %.2f\n", quotient2);
    } else {
        printf("Erreur : Les deux nombres doivent être non nuls.\n");
    }

    return 0;
}
