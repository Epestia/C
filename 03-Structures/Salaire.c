#include <stdio.h>

int main() {
    // Déclaration des variables
    float salaire_brut, salaire_net, retenue, taux_retenue;

    // Demande de saisie du salaire brut
    printf("Entrez le salaire brut de l'ouvrier : ");
    scanf("%f", &salaire_brut);

    // Calcul de la retenue et du salaire net en fonction du taux
    if (salaire_brut < 1500) {
        taux_retenue = 0.20;
    } else {
        taux_retenue = 0.25;
    }

    retenue = salaire_brut * taux_retenue;
    salaire_net = salaire_brut - retenue;

    // Affichage des résultats
    printf("La retenue est de %.2f euros (%.0f%%).\n", retenue, taux_retenue * 100);
    printf("Le salaire net de l'ouvrier est de %.2f euros.\n", salaire_net);

    return 0;
}
