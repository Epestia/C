#include <stdio.h>

int main() {
    double AD, DB, AE, EC;

    // Lire les longueurs des segments coupés par la droite parallèle
    printf("Entrez la longueur de AD : ");
    scanf("%lf", &AD);
    printf("Entrez la longueur de DB : ");
    scanf("%lf", &DB);
    printf("Entrez la longueur de AE : ");
    scanf("%lf", &AE);
    printf("Entrez la longueur de EC : ");
    scanf("%lf", &EC);

    // Vérifier si les segments sont proportionnels selon le théorème de Thalès
    if (AD / DB == AE / EC) {
        printf("Les segments sont proportionnels selon le théorème de Thalès.\n");
    } else {
        printf("Les segments ne sont pas proportionnels selon le théorème de Thalès.\n");
    }

    return 0;
}
