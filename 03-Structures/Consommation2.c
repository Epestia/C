#include <stdio.h>

int main() {
    // Déclaration des variables
    float litres, kilometres, consommation_100km;

    // Demande de saisie des données
    printf("Entrez le nombre de litres consommes : ");
    scanf("%f", &litres);
    printf("Entrez le nombre de kilometres parcourus : ");
    scanf("%f", &kilometres);

    // Calcul et affichage de la consommation au 100 km
    if (kilometres >= 50 || litres >= 2) {
        consommation_100km = (litres * 100.0) / kilometres;
        printf("La consommation au 100 km est de %.2f litres.\n", consommation_100km);
    } else {
        printf("Erreur : Conditions non remplies pour calculer la consommation.\n");
    }

    return 0;
}
