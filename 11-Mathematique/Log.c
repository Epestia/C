#include <stdio.h>
#include <math.h>

int main() {
    double number, base, result;

    // Demander à l'utilisateur d'entrer un nombre
    printf("Entrez un nombre pour calculer son logarithme : ");
    scanf("%lf", &number);

    // Demander à l'utilisateur d'entrer la base
    printf("Entrez la base du logarithme (entrez 'e' pour le logarithme naturel) : ");
    char base_input[10];
    scanf("%s", base_input);

    // Calculer le logarithme
    if (number > 0) {
        if (base_input[0] == 'e') {
            result = log(number);
            printf("Le logarithme naturel (ln) de %.2lf est %.2lf\n", number, result);
        } else {
            base = atof(base_input);
            if (base > 0 && base != 1) {
                result = log(number) / log(base);
                printf("Le logarithme de %.2lf avec la base %.2lf est %.2lf\n", number, base, result);
            } else {
                printf("Erreur : la base doit être un nombre positif différent de 1.\n");
            }
        }
    } else {
        printf("Erreur : le nombre doit être positif.\n");
    }

    return 0;
}
