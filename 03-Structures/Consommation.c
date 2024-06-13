#include <stdio.h>

int main() {
    // Déclaration des variables
    float km, litres, consommation_100km;

    // Demande de saisie des données
    printf("Entrez le nombre de kilometres parcourus : ");
    scanf("%f", &km);
    printf("Entrez le nombre de litres consommes : ");
    scanf("%f", &litres);

    // Calcul de la consommation au 100 km et affichage
    if (km < 50) {
        printf("kilometrage insuffisant\n");
    } else {
        consommation_100km = (litres * 100.0) / km;
        printf("La consommation au 100 km est de %.2f litres.\n", consommation_100km);
    }

    return 0;
}
