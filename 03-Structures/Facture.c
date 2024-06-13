#include <stdio.h>

int main() {
    // Déclaration des variables
    float montant_facture, montant_final;

    // Demande de saisie du montant total de la facture
    printf("Entrez le montant total de la facture : ");
    scanf("%f", &montant_facture);

    // Calcul du montant final après application de la remise si nécessaire
    if (montant_facture >= 1000) {
        montant_final = montant_facture * 0.9; // 10% de remise
    } else {
        montant_final = montant_facture; // Pas de remise
    }

    // Affichage du montant final à payer
    printf("Le montant final a payer est de : %.2f euros\n", montant_final);

    return 0;
}
